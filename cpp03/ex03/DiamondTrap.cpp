/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:49:36 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/04 19:14:19 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Constr Called " << '\n';
	// this->name = ClapTrap::Name;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap paramitrize Called" << '\n';
	this->Name = name;
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

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I'm " << this->Name << '\n';
}