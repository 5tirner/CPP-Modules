/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:05:29 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/10 23:44:32 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm Constructor Called" << '\n';
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int sign, int execute) : AForm(name, sign, execute)
{
    std::cout << "ShrubberyCreationForm Paramz Called" << '\n';
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
    std::cout << "ShrubberyCreationForm Copy Onr Called" << '\n';
}

ShrubberyCreationForm&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "This Is Uselees Move, AnyWay\nShrubberyCreationForm Assignement Called" << '\n';
    other.showName();
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm Distructor Called" << '\n';
}

/**/
