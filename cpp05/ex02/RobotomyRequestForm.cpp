/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:51:42 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/13 20:16:53 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : 
    AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm Constructor Called" << '\n';
}

// RobotomyRequestForm::RobotomyRequestForm(std::string shName, int gsign, int gexec) : AForm(shName, gsign, gexec)
// {
//     std::cout << "RobotomyRequestForm Paramz One Called" << '\n';
//     if (gsign == 72 && gexec == 45)
//     {
//         std::cout << "\023Break News: " << this->showName()
//         << "has been robotomized successfully 50% of the time" << '\n';
//     }
//     else
//         std::cout << "Danger: the robotomy failed.";
// }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
    std::cout << "RobotomyRequestForm Copy One Called" << '\n';
    if (this->ShowGradeToExecute() == 45 && this->ShowGradeToSign() == 72)
    {
        std::cout << "Break News: " << this->showName()
        << "has been robotomized successfully 50% of the time" << '\n';
    }
    else
        std::cout << "Danger: the robotomy failed" << '\n';
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
    if (executor.getGrade() < this->ShowGradeToExecute() && this->ShowStatus() == true)
    {
        std::cout << "Break News: " << this->showName()
        << "has been robotomized successfully 50% of the time" << '\n';
    }
    else
    {
        std::cout << "Danger: the robotomy failed" << '\n';
        throw AForm::GradeTooHighException();
    }
}