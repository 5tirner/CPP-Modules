/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:28:27 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/24 15:54:59 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
{
	std::cout << "Contructor Called 📞" << '\n';
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
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
	std::cout << this->Name << " Attacking 🤜🏽" << target << '\n';
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->Name << " Take Damage == " << amount <<  " 🤕"<<'\n';
}

void	ClapTrap::setName(std::string name)
{
	std::cout << "Name Set-in ✍️" << '\n'; 
	this->Name = name;	
}

std::string	ClapTrap::get_name(void)
{
	std::cout << "Get This Name: " << this->Name <<  " ✔️" <<'\n';
	return (this->Name);
}
