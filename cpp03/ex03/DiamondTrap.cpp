/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:49:36 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/05 14:25:54 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Constr Called " << '\n';
	this->initVals("Empty", 30, 50, 100);
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap paramitrize Called" << '\n';
	this->initVals(name + "_clap_name", 30, 50, 100);
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Diamond Copy Called" << '\n';
	*this = other;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Assignment Called" << '\n';
	this->Name = other.Name;
	this->AttackDamage = other.AttackDamage;
	this->EnergyPoints = other.EnergyPoints;
	this->HitPoints = other.HitPoints;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Distructor Called for: " << this->Name << '\n';
}

void	DiamondTrap::attack(std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I'm " << this->Name << '\n';
}