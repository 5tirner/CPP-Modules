/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:48:30 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/05 14:55:31 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <bits/fs_fwd.h>

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Constructor Called 📞" << '\n';
	this->Name = "Empty";
	this->initVals(30, 100, 100);
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap Constructor Paramitrize Called 📞" << '\n';
	this->Name = name;
	this->initVals(30, 100, 100);
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap()
{
	std::cout << "FragTrap Copy One Called 📞" << '\n';
	*this = other;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Assignment Called 📞" << '\n';
	this->Name = other.Name;
	this->initVals(other.AttackDamage
		, other.EnergyPoints, other.HitPoints);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Distructor Called 📞"
		<< " For The Obj That Have Name: " << this->Name << '\n';
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "This FragTrap: " << this->getName() << " Do, High Five Guuuuuys 🙌" << '\n';	
}