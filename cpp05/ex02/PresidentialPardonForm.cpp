/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:36:53 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/13 21:34:49 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : 
    AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm Constructor Called" << '\n';
    this->target = "Not Set";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) :
    AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm Paramz One Called" << '\n';
    this->target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : 
    AForm(other)
{
    std::cout << "PresidentialPardonForm Copy One Called" << '\n';
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
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << '\n';
    else if (this->ShowStatus() == false)
        throw AForm::NotSignedYet();
    else
        throw AForm::GradeTooLowException();
}