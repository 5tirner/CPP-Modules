/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:36:53 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/13 00:59:40 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm()
{
    std::cout << "PresidentialPardonForm Constructor Called" << '\n';
}

PresidentialPardonForm::PresidentialPardonForm(std::string shName, int gsign, int gexec) : AForm(shName, gsign, gexec)
{
    std::cout << "PresidentialPardonForm Paramz One Called" << '\n';
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other)
{
    std::cout << "PresidentialPardonForm Copy One Called" << '\n';
}

PresidentialPardonForm&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    //AForm::operator=(other);
    other.showName();
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
    (void)executor;
}