/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:05:29 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/15 15:04:18 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Constructor Called" << '\n';
	this->type = "UNKOWING DOG";
	this->brain = new Brain;
}

Dog::Dog(std::string type)
{
	std::cout << "Dog Constructor Param Called" << '\n';
	this->type = type;
	this->brain = new Brain;
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "Dog Copy One Called" << '\n';
	*this = other;
}

Dog&Dog::operator=(const Dog &other)
{
	std::cout << "Dog Assignment One Called" << '\n';
	this->type = other.type;
	this->brain = new Brain;
	this->brain = other.brain;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Distructor Called" << '\n';
	delete this->brain;
}

/*----------------------------------------------------*/

void	Dog::makeSound(void) const
{
	std::cout << this->type << " Do: N3aw3aw" << '\n';
}