/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:05:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/08 14:11:18 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm Constructor Called" << '\n';
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, int gradeToSign, int gradeToExecute) : AForm()
{

}