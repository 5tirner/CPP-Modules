/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:06:08 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/13 01:01:38 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm()
{
    std::cout << "ShrubberyCreationForm Constructor Called" << '\n';
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string shName, int gsign, int gexec) : AForm(shName, gsign, gexec)
{
    std::cout << "ShrubberyCreationForm Paramz One Called" << '\n';
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
    std::cout << "ShrubberyCreationForm Copy One Called" << '\n';
}

ShrubberyCreationForm&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    //AForm::operator=(other);
    other.showName();
    std::cout << "ShrubberyCreationForm Assignemet here" << '\n';
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm Distructor Called" << '\n';
}

/*ShrubberyCreationForm Exec Func*/

void    ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    (void)executor;
}