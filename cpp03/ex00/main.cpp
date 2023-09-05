/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:35:17 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/05 14:57:45 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap z;
    ClapTrap a("MESSI");
    ClapTrap b("CRISTIANO");
    std::cout << "-----------------------\n";
    std::cout << "Moves:" << '\n';
    z.getName();
    b.getName();
    a.getName();
    std::cout << "-----------------------\n";
    a.attack("Ederson");
    b.takeDamage(100);
    b.beRepaired(1);
    std::cout << "-----------------------\n";
    std::cout << "Results:" << '\n';
    a.status();
    b.status();
}