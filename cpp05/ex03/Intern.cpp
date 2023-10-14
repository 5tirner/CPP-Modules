/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:59:33 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/14 20:30:27 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
    std::cout << "Intern Constructor Called" << '\n';
}

Intern::Intern(const Intern &other)
{
    std::cout << "Intern Copy One Called" << '\n';
    *this = other;
}

Intern&Intern::operator=(const Intern &other)
{
    std::cout << "Intern Assignement One Called" << '\n';
    (Intern)other;
    return (*this);
}

Intern::~Intern(void)
{
    std::cout << "Intern Distructor Called" << '\n';
}

/*Make Form Func*/

std::string goodName(std::string name)
{
    int i = 0;
    std::string r;
    while (name[i])
    {
        if (name[i] != ' ')
            r += tolower(name[i]);
        i++;
    }
    return (r);
}
AForm    *Intern::makeForm(std::string formName, std::string target)
{
    AForm       *r;
    std::string Fname[3];
    std::string newName = goodName(formName);
    int         i = 0;

    Fname[0] = "shrubberycreation";
    Fname[1] = "robotomyrequest";
    Fname[2] = "presidentialpardon";
    while (i < 3 && Fname[i] != newName)
        i++;
    switch (i)
    {
        case 0:
            std::cout << "Intern Creates A ShrubberyCreationForm" << '\n'; 
            r = new ShrubberyCreationForm(target);
            break;
        case 1:
            std::cout << "Intern Creates A RobotomyRequestForm" << '\n';
            r = new RobotomyRequestForm(target);
            break;
        case 2:
            std::cout << "Intern Creates A PresidentialPardonForm" << '\n';
            r = new PresidentialPardonForm(target);
            break;
        default:
            std::cout << "Form Doesn't Found" << '\n';
            r = NULL;
            break;
    }
    return (r);
}