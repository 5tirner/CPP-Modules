/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:28:27 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/05 14:12:41 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

void	ClapTrap::initVals(std::string name, int Attack, int Energy, int Hit)
{
	this->Name = name;
	this->AttackDamage = Attack;
	this->EnergyPoints = Energy;
	this->HitPoints = Hit;
}
ClapTrap::ClapTrap(void)
{
	std::cout << "Contructor Called 📞" << '\n';
	this->initVals("Empty", 0, 10, 10);
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor Parametrize Called 📞" << '\n';
	this->initVals(name, 0, 10, 10);
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
	std::cout << "Distructor Called 📞" << "For The Obj That Have Name: " << this->Name << '\n';
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
		if (amount > this->HitPoints)
			this->HitPoints = 0;
		else
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

std::string	ClapTrap::getName(void) const
{
	std::cout << "Get This Name: " << this->Name <<  " ✔️" <<'\n';
	return (this->Name);
}
void	ClapTrap::status(void) const
{
	std::cout << this->Name << ": Status" << '\n';
	std::cout << "Attack Points is: " << this->AttackDamage << '\n';
	std::cout << "Energy Points is: " << this->EnergyPoints << '\n';
	std::cout << "Hit Points is: " << this->HitPoints << '\n';
}

int		ClapTrap::getHitPoints(void) const
{
	return (this->HitPoints);
}

int		ClapTrap::getEnergyPoints(void) const
{
	return (this->EnergyPoints);
}

int		ClapTrap::getAttackPoints(void) const
{
	return (this->HitPoints);
}