/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:31:14 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/09 18:39:08 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor Called" << '\n';
}

Brain::Brain(std::string param)
{
	std::cout << "Brain Const Param Called" << '\n';
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy One Called" << '\n';
	*this = other;
}

Brain&Brain::operator=(const Brain &other)
{
	std::cout << "Brain Assignment Called" << '\n';
	this->ideas = other.ideas;
	return (*this);
}