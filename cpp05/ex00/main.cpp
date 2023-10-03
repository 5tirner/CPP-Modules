/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:33:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/03 04:43:29 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    int i = 0;
    std::cout << "Test Each Function :" << '\n';
    Bureaucrat a("a", 2);
    Bureaucrat b("b", 150);
    std::cout << "---------------------------------------------------\n"
    << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n'
    << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n'
    << "---------------------------------------------------\n";
    a.plusGrade();
    std::cout << "name: " << a.getName() << " | grade: " << a.getGrade() << '\n';
    b.minusGrade();
    std::cout << "name: " << b.getName() << " | grade: " << b.getGrade() << '\n';
    std::cout << "---------------------------------------------------\n"
    << "Other Tests :" << '\n';
    const Bureaucrat Hegl("Philosopher", 10);
    Bureaucrat Karl = Hegl;
    Bureaucrat Stirner = Hegl;
    std::cout << "---------------------------------------------------" << '\n';
    while (i < 10)
    {
        Karl.minusGrade();
        std::cout << "--------------------" << '\n';
        Stirner.plusGrade();
        std::cout << "--------------------" << '\n';
        i++;
    }
    std::cout << Karl << '\n' << Stirner << '\n';
    a = Hegl;
}