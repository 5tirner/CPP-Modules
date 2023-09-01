/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:03:36 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/01 16:27:27 by zasabri          ###   ########.fr       */
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
		,other.getEnergyPoints(), other.getHitPoints());
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor Called" << '\n';
}