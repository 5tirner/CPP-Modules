/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:18:18 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/26 15:33:13 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Constructor Called" << '\n';
	this->type = "UNKOWING CAT";
	this->brain = new Brain;
}

Cat::Cat(std::string type)
{
	std::cout << "Cat Constructor Param Called" << '\n';
	this->type = type;
	this->brain = new Brain;
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "Cat Copy One Called" << '\n';
	this->brain = NULL;
	*this = other;
}

Cat&Cat::operator=(const Cat &other)
{
	std::cout << "Cat Assignment One Called" << '\n';
	this->type = other.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain;
	*this->brain = *other.brain;
	std::cout << this->brain << "   |  " << other.brain << std::endl;
	//this->brain = other.brain;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat Distructor Called" << '\n';
	delete this->brain;
}

/*----------------------------------------------------*/

void	Cat::makeSound(void) const
{
	std::cout << this->type << " Do: Myaw" << '\n';
}
