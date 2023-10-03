/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 23:33:22 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/03 01:01:34 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
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
}