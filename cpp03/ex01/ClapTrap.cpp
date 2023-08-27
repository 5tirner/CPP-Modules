/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:28:27 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/27 14:37:58 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
{
	std::cout << "Contructor Called 📞" << '\n';
	this->Name = "Not Set Yet";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy One Called 📞" << '\n';
	*this = other;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Assignment Called 📞" << '\n';
	this->Name = other.Name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Distructor Called 📞" << '\n';
}

void    ClapTrap::attack(const std::string &target)
{
	if (this->HitPoints > 0 && this->EnergyPoints > 0)
	{
		std::cout << this->Name << " Attacking ⚔ " << target << '\n';
		std::cout << target << " Lose: " << this->AttackDamage << '\n';
		this->EnergyPoints -= 1;
	}
	else
		std::cout << this->Name << " Can't Do Anything ⚠️" << '\n';
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints > 0 && this->EnergyPoints > 0)
	{
		std::cout << this->Name << " Take Damage == " << amount <<  " 🤕"<<'\n';
		this->HitPoints -= amount;
	}
	else 
		std::cout << this->Name << " Can't Take Damage" << '\n';
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints > 0 && this->EnergyPoints > 0)
	{
		std::cout << this->Name << " Be Repaired" << '\n';
		this->HitPoints += amount;
		this->EnergyPoints -= 1;
	}
	else
		std::cout << this->Name << " Can't Repaired" << '\n';
}

void	ClapTrap::setName(std::string name)
{
	std::cout << "Name Set-in ✍️" << '\n'; 
	this->Name = name;	
}

std::string	ClapTrap::getName(void)
{
	std::cout << "Get This Name: " << this->Name <<  " ✔️" <<'\n';
	return (this->Name);
}

void	ClapTrap::printAttack(void) const
{
	std::cout << this->Name << " Attack Points is: " << this->AttackDamage << '\n';
}

void ClapTrap::printEnergy(void) const
{
	std::cout << this->Name << " Energy Points is: " << this->EnergyPoints << '\n';

}

void	ClapTrap::printHit(void) const
{
	std::cout << this->Name << " Hit Points is: " << this->HitPoints << '\n';
}