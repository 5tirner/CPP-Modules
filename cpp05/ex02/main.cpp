/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:33:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/09 10:08:19 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <exception>
#include <iostream>

int main(void)
{
    Bureaucrat a("Bur1", 2);
    Bureaucrat b("Bur2", 1);
    try
    {
        a.plusGrade();
        b.plusGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    std::cout << a << '\n' << b << '\n';
}