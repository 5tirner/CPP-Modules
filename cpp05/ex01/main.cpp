/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:33:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/08 13:28:09 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>

int main(void)
{
    Bureaucrat a("Bur1", 10);
    Bureaucrat b("Bur2", 10);
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
    std::cout << "-----------------------------\n";
    Form f1("Form1", 2, 2);
    Form f2("Form2", 11, 11);
    std::cout << f1 << '\n' << f2 << '\n';
    std::cout << "------------------------------\n";
    try
    {
        f1.beSigned(a);
        f2.beSigned(b);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    std::cout << "---------------------\n";
    std::cout << f1 << '\n' << f2 << '\n';
    std::cout << "-----------------------------\n";
    a.signForm(f1);
    b.signForm(f2);
}