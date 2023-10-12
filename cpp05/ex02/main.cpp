/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:33:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/13 00:04:31 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    try
    {
        ShrubberyCreationForm a("Hero", 11, 11);
        ShrubberyCreationForm b = a;
        std::cout << a << "\n" << b << '\n';
        std::cout << "-------------\n";
        RobotomyRequestForm c("Hora", 13, 14);
        RobotomyRequestForm d = c;
        std::cout << c << '\n' << d << '\n';
        std::cout << "-------------\n";
    }
    catch(std::exception &e)
    {
        std::cout << e.what();
    }
}