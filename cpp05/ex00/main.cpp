/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:33:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/04 23:27:47 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main(void)
{
    std::cout << "Test Each Function :" << '\n';
    Bureaucrat a("a", 2);
    Bureaucrat b("b", 150);
    std::cout << "---------------------------------------------------\n"
    << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n'
    << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n'
    << "---------------------------------------------------\n";
    try
    {
        a.plusGrade();
        b.minusGrade();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    std::cout << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n';
    std::cout << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n';
    std::cout << "---------------------------------------------------\n"
    << "Other Tests :" << '\n';
    int i = 0;
    const Bureaucrat Hegl("Philosopher", 10);
    Bureaucrat Karl = Hegl;
    Bureaucrat Stirner = Hegl;
    std::cout << "---------------------------------------------------" << '\n';
    try
    {
        while (i < 10)
        {
            Karl.minusGrade();
            std::cout << "--------------------" << '\n';
            Stirner.plusGrade();
            std::cout << "--------------------" << '\n';
            i++;
        }
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    std::cout << Karl << '\n' << Stirner << '\n';
    try
    {
        Bureaucrat over("Singala", 151);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    try
    {
        Bureaucrat under("Sing", 0);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
}