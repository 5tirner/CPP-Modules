/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:35:17 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/27 12:39:44 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap a;
    ClapTrap b;
    std::cout << "Moves:" << '\n';
    b.setName("Ederson");
    a.setName("MOHAMMAD SLAH");
    b.getName();
    a.getName();
    a.attack("Ederson");
    b.takeDamage(3);
    b.beRepaired(1);
    std::cout << "Results" << '\n';
    a.printAttack();
    a.printEnergy();
    a.printHit();
    b.printAttack();
    b.printEnergy();
    b.printHit();
}