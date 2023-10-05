/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:33:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/05 22:41:26 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>

int main(void)
{
    // std::cout << "Test Each Function :" << '\n';
    // Bureaucrat a("a", 2);
    // Bureaucrat b("b", 150);
    // std::cout << "---------------------------------------------------\n"
    // << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n'
    // << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n'
    // << "---------------------------------------------------\n";
    // try
    // {
    //     a.plusGrade();std::cout << "Test Each Function :" << '\n';
    // Bureaucrat a("a", 2);
    // Bureaucrat b("b", 150);
    // std::cout << "---------------------------------------------------\n"
    // << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n'
    // << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n'
    // << "---------------------------------------------------\n";
    // try
    // {
    //     a.plusGrade();
    //     b.minusGrade();
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // std::cout << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n';
    // std::cout << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n';
    // std::cout << "---------------------------------------------------\n"
    // << "Other Tests :" << '\n';
    // int i = 0;
    // const Bureaucrat Hegl("Philosopher", 10);
    // Bureaucrat Karl = Hegl;
    // Bureaucrat Stirner = Hegl;
    // std::cout << "---------------------------------------------------" << '\n';
    // try
    // {
    //     while (i < 10)
    //     {
    //         Karl.minusGrade();
    //         std::cout << "--------------------" << '\n';
    //         Stirner.plusGrade();
    //         std::cout << "--------------------" << '\n';
    //         i++;
    //     }
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // std::cout << Karl << '\n' << Stirner << '\n';
    // try
    // {
    //     Bureaucrat over("Singala", 151);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // try
    // {
    //     Bureaucrat under("Sing", 0);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    //     b.minusGrade();
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // std::cout << "name: " <<std::cout << "Test Each Function :" << '\n';
    // Bureaucrat a("a", 2);
    // Bureaucrat b("b", 150);
    // std::cout << "---------------------------------------------------\n"
    // << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n'
    // << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n'
    // << "---------------------------------------------------\n";
    // try
    // {
    //     a.plusGrade();
    //     b.minusGrade();
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // std::cout << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n';
    // std::cout << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n';
    // std::cout << "---------------------------------------------------\n"
    // << "Other Tests :" << '\n';
    // int i = 0;
    // const Bureaucrat Hegl("Philosopher", 10);
    // Bureaucrat Karl = Hegl;
    // Bureaucrat Stirner = Hegstd::cout << "Test Each Function :" << '\n';
    // Bureaucrat a("a", 2);
    // Bureaucrat b("b", 150);
    // std::cout << "---------------------------------------------------\n"
    // << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n'
    // << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n'
    // << "---------------------------------------------------\n";
    // try
    // {
    //     a.plusGrade();
    //     b.minusGrade();
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // std::cout << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n';
    // std::cout << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n';
    // std::cout << "---------------------------------------------------\n"
    // << "Other Tests :" << '\n';
    // int i = 0;
    // const Bureaucrat Hegl("Philosopher", 10);
    // Bureaucrat Karl = Hegl;
    // Bureaucrat Stirner = Hegl;
    // std::cout << "---------------------------------------------------" << '\n';
    // try
    // {
    //     while (i < 10)
    //     {
    //         Karl.minusGrade();
    //         std::cout << "--------------------" << '\n';
    //         Stirner.plusGrade();
    //         std::cout << "--------------------" << '\n';
    //         i++;
    //     }
    // }std::cout << "Test Each Function :" << '\n';
    // Bureaucrat a("a", 2);
    // Bureaucrat b("b", 150);
    // std::cout << "---------------------------------------------------\n"
    // << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n'
    // << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n'
    // << "---------------------------------------------------\n";
    // try
    // {
    //     a.plusGrade();
    //     b.minusGrade();
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // std::cout << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n';
    // std::cout << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n';
    // std::cout << "---------------------------------------------------\n"
    // << "Other Tests :" << '\n';
    // int i = 0;
    // const Bureaucrat Hegl("Philosopher", 10);
    // Bureaucrat Karl = Hegl;
    // Bureaucrat Stirner = Hegl;
    // std::cout << "---------------------------------------------------" << '\n';
    // try
    // {
    //     while (i < 10)
    //     {
    //         Karl.minusGrade();
    //         std::cout << "--------------------" << '\n';
    //         Stirner.plusGrade();
    //         std::cout << "--------------------" << '\n';
    //         i++;
    //     }
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // std::cout << Karl << '\n' << Stirner << '\n';
    // try
    // {
    //     Bureaucrat over("Singala", 151);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // try
    // {
    //     Bureaucrat under("Sing", 0);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // std::cout << Karl << '\n' << Stirner << '\n';
    // try
    // {
    //     Bureaucrat over("Singala", 151);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // try
    // {
    //     Bureaucrat under("Sing", 0);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }l;
    // std::cout << "---------------------------------------------------" << '\n';
    // try
    // {
    //     while (i < 10)
    //     {
    //         Karl.minusGrade();
    //         std::cout << "--------------------" << '\n';
    //         Stirner.plusGrade();
    //         std::cout << "--------------------" << '\n';
    //         i++;
    //     }
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // std::cout << Karl << '\n' << Stirner << '\n';
    // try
    // {
    //     Bureaucrat over("Singala", 151);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // try
    // {
    //     Bureaucrat under("Sing", 0);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // } a.getName() << " | grade: " << a.getGrade() << '\n';
    // std::cout << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n';
    // std::cout << "---------------------------------------------------\n"
    // << "Other Tests :" << '\n';
    // int i = 0;
    // const Bureaucrat Hegl("Philosopher", 10);
    // Bureaucrat Karl = Hegl;
    // Bureaucrat Stirner = Hegl;
    // std::cout << "---------------------------------------------------" << '\n';
    // try
    // {
    //     while (i < 10)
    //     {
    //         Karl.minusGrade();
    //         std::cout << "--------------------" << '\n';
    //         Stirner.plusGrade();
    //         std::cout << "--------------------" << '\n';
    //         i++;
    //     }
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';std::cout << "Test Each Function :" << '\n';
    // Bureaucrat a("a", 2);
    // Bureaucrat b("b", 150);
    // std::cout << "---------------------------------------------------\n"
    // << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n'
    // << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n'
    // << "---------------------------------------------------\n";
    // try
    // {
    //     a.plusGrade();
    //     b.minusGrade();
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // std::cout << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n';
    // std::cout << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n';
    // std::cout << "---------------------------------------------------\n"
    // << "Other Tests :" << '\n';
    // int i = 0;
    // const Bureaucrat Hegl("Philosopher", 10);
    // Bureaucrat Karl = Hegl;
    // Bureaucrat Stirner = Hegl;
    // std::cout << "---------------------------------------------------" << '\n';
    // try
    // {
    //     while (i < 10)
    //     {
    //         Karl.minusGrade();
    //         std::cout << "--------------------" << '\n';
    //         Stirner.plusGrade();
    //         std::cout << "--------------------" << '\n';
    //         i++;
    //     }
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // std::cout << Karl << '\n' << Stirner << '\n';
    // try
    // {
    //     Bureaucrat over("Singala", 151);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // try
    // {
    //     Bureaucrat under("Sing", 0);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // }
    // std::cout << Karl << '\n' << Stirner << '\n';
    // try
    // {
    //     Bureaucrat over("Singala", 151);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    // try
    // {
    //     Bureaucrat under("Sing", 0);
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << e.what() << '\n';
    // }
    Form a;
    Form b = a;
}