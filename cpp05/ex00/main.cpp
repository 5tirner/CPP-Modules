/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:33:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/16 10:10:17 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int main(void)
{
    try
    {
        Bureaucrat a("Nae", 152);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    std::cout << "-----------------------\nTest Each Function :" << '\n';
    try
    {
        Bureaucrat a("a", 2);
        Bureaucrat b("b", 150);
        std::cout << "---------------------------------------------------\n"
        << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n'
        << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n'
        << "---------------------------------------------------\n";
        a.plusGrade();
        b.minusGrade();
        std::cout << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n';
        std::cout << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n';
        std::cout << "---------------------------------------------------\n"
        << "Other Tests :" << '\n';
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
    int i = 0;
    try
    {
        const Bureaucrat Hegl("Philosopher", 10);
        Bureaucrat Karl = Hegl;
        Bureaucrat Stirner = Hegl;
        std::cout << "---------------------------------------------------" << '\n';
        while (i < 9)
        {
            Karl.minusGrade();
            std::cout << "--------------------" << '\n';
            Stirner.plusGrade();
            std::cout << "--------------------" << '\n';
            i++;
        }
        std::cout << Karl << '\n' << Stirner << '\n';
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
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