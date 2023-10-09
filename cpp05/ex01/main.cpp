/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:33:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/09 16:22:20 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>

int main(void)
{
    try
    {
        Bureaucrat a("Bur1", 10);
        Bureaucrat b("Bur2", 10);
        std::cout << "-----------------------------\n";
        a.plusGrade();
        b.plusGrade();
        std::cout << "-----------------------------\n";
        std::cout << a << '\n' << b << '\n';
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    std::cout << "-----------------------------\n";
    try
    {
        Bureaucrat a("Bur1", 1);
        Bureaucrat b("Bur2", 2);
        std::cout << "------------------------------\n";
        Form f1("Form1", 2, 2);
        Form f2("Form2", 11, 11);
        std::cout << "------------------------------\n";
        std::cout << f1 << '\n' << f2 << '\n';
        std::cout << "-----------------------------\n";
        f1.beSigned(a);
        f2.beSigned(b);
        std::cout << "-----------------------------\n";
        std::cout << f1 << '\n' << f2 << '\n';
        std::cout << "-----------------------------\n";
        a.signForm(f1);
        b.signForm(f2);
        std::cout << "-----------------------------\n";
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
}