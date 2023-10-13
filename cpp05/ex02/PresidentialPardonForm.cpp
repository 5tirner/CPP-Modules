/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:36:53 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/13 20:18:16 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : 
    AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm Constructor Called" << '\n';
}

// PresidentialPardonForm::PresidentialPardonForm(std::string shName, int gsign, int gexec) : 
//     AForm(shName, gsign, gexec)
// {
//     std::cout << "PresidentialPardonForm Paramz One Called" << '\n';
//     if (gsign == 25 && gexec == 5)
//         std::cout << this->showName() << " has been pardoned by Zaphod Beeblebrox" << '\n';
// }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : 
    AForm(other)
{
    std::cout << "PresidentialPardonForm Copy One Called" << '\n';
    if (this->ShowGradeToExecute() == 5 && this->ShowGradeToSign() == 25)
        std::cout << this->showName() << " has been pardoned by Zaphod Beeblebrox" << '\n';
}

PresidentialPardonForm&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    AForm::operator=(other);
    std::cout << "PresidentialPardonForm Assignemet here" << '\n';
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm Distructor Called" << '\n';
}

/*PresidentialPardonForm Exec Func*/

void    PresidentialPardonForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() < this->ShowGradeToExecute() && this->ShowStatus() == true)
        std::cout << this->showName() << " has been pardoned by Zaphod Beeblebrox" << '\n';
    else
        throw AForm::GradeTooHighException();
}