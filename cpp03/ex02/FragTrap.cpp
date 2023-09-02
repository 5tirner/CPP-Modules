/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:48:30 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/02 13:34:52 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Constructor Called" << '\n';
	this->initVals("Empty", 30, 100, 100);
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Constructor Paramitrize Called" << '\n';
	this->initVals(name, 30, 100, 100);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap()
{
	std::cout << "FragTrap Copy One Called" << '\n';
	*this = other;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Assignment Called" << '\n';
	this->initVals(other.getName(), other.getAttackPoints()
		, other.getEnergyPoints(), other.getHitPoints());
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << '\n';
}
