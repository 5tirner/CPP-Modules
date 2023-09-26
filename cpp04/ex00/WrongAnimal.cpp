/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:36:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/26 15:42:18 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Constructor Called" << '\n';
	this->type = "UNKOWING WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal Constructor Param Called" << '\n';
	this->type = type;	
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy One Called" << '\n';
	*this = other;
}

WrongAnimal&WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Assignment One Called" << '\n';
	this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Distructor Called" << '\n';
}

/*------------------------------------------------------------*/

void	WrongAnimal::setType(std::string type)
{
	std::cout << type << " Has Been Seted" << '\n';
	this->type = type;
}

std::string	WrongAnimal::getType(void) const
{
	//std::cout << this->type << " Was Geted" << '\n';
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->type << "" << '\n';
}