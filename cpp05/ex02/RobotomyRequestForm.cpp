/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:51:42 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/12 23:54:17 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm()
{
    std::cout << "RobotomyRequestForm Constructor Called" << '\n';
}

RobotomyRequestForm::RobotomyRequestForm(std::string shName, int gsign, int gexec) : AForm(shName, gsign, gexec)
{
    std::cout << "RobotomyRequestForm Paramz One Called" << '\n';
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