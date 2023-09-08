/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:01:57 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/08 17:17:50 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal Constructor Called" << '\n';
	this->type = "NOT SET YET";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy One Called" << '\n';
	*this = other;
}

Animal&Animal::operator=(const Animal &other)
{
	std::cout << "Animal Assignment One Called" << '\n';
	this->type = other.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Distructor Called" << '\n';
}