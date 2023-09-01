/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:03:36 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/01 16:43:37 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Constructor Called" << '\n';
	this->initVals("Empty", 20, 50, 100);
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap Param Called" << '\n';
	this->initVals(name, 20, 50, 100);
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap()
{
	std::cout << "ScavTrap Copy Called" << '\n';
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Assignment Called" << '\n';
	this->initVals(other.getName(), other.getAttackPoints()
		, other.getEnergyPoints(), other.getHitPoints());
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor Called" << '\n';
}

void    ScavTrap::attack(const std::string &target)
{
	std::cout << "Scavtrap Overriding Attack Method\n"
		<< "Overriding Type: Call Overridden Function From Derived Class" << '\n';
	ClapTrap::attack(target);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "Scavtrap Overriding takeDamage Method\n"
		<< "Overriding type: c++ Call Overridden Function From Derived Class" << '\n';
	ClapTrap::takeDamage(amount);	
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "Scavtrap Overriding beReoaired Method\n"
		<< "Overriding Type: c++ Call Overridden Function From Derived Class" << '\n';
	ClapTrap::beRepaired(amount);
}