/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:35:17 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/04 19:17:35 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << "Clap Trap Tests" << '\n';
    ClapTrap a("MESSI");
    ClapTrap b("CRISTIANO");
    std::cout << "-----------------------\n";
    std::cout << "Moves:" << '\n';
    b.getName();
    a.getName();
    std::cout << "-----------------------\n";
    a.attack("Ederson");
    b.takeDamage(10);
    b.beRepaired(1);
    std::cout << "-----------------------\n";
    std::cout << "Results:" << '\n';
    a.status();
    b.status();
    std::cout << "--------------------------------------------------------------" << '\n'
        << "ScavTrap Tests" << '\n'; 
    ScavTrap c("PEPE");
    ScavTrap d("KAKA");
    std::cout << "-----------------------\n";
    std::cout << "Moves:" << '\n';
    // b.setName("Ederson");
    // a.setName("MOHAMMAD SLAH");
    c.getName();
    d.getName();
    std::cout << "-----------------------\n";
    c.attack("Ederson");
    d.takeDamage(10);
    d.beRepaired(16);
    std::cout << "-----------------------\n";
    std::cout << "Results:" << '\n';
    c.status();
    d.status();
    std::cout << "-----------------------\n"; 
    const ScavTrap e("MOUSSA");
    std::cout << "-----------------------\n";
    e.status();
    std::cout << "--------------------------------------------------------------" << '\n'
        << "FragTrap Tests" << '\n';
    FragTrap f("SUARIZ");
    FragTrap j("BENZEMA");
    std::cout << "Moves:" << '\n';
    // b.setName("Ederson");
    // a.setName("MOHAMMAD SLAH");
    f.getName();
    j.getName();
    std::cout << "-----------------------\n";
    f.attack("Ederson");
    j.takeDamage(10);
    j.beRepaired(1);
    std::cout << "-----------------------\n";
    std::cout << "Results:" << '\n';
    f.status();
    j.status();
    std::cout << "-----------------------\n"; 
    const FragTrap h("MOUSSA");
    std::cout << "-----------------------\n";
    h.status();
    DiamondTrap i("Zakaria");
    i.whoAmI();
    std::cout << "-----------------------\n";
}