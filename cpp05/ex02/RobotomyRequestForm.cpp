/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:51:42 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/13 21:35:00 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : 
    AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm Constructor Called" << '\n';
    this->target = "Not Set";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) :
    AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm Paramz One Called" << '\n';
    this->target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
    std::cout << "RobotomyRequestForm Copy One Called" << '\n';
}

RobotomyRequestForm&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    AForm::operator=(other);
    std::cout << "RobotomyRequestForm Assignemet here" << '\n';
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm Distructor Called" << '\n';
}

/*RobotomyRequestForm Exec Func*/

void    RobotomyRequestForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() <= this->ShowGradeToExecute() && this->ShowStatus() == true)
    {
        std::cout << "Break News: " << this->target
        << "has been robotomized successfully 50% of the time" << '\n';
    }
    else if (this->ShowStatus() == false)
        throw AForm::NotSignedYet();
    else
        throw AForm::GradeTooLowException();
}