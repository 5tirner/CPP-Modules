/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:31:14 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/10 14:40:56 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor Called" << '\n';
}

Brain::Brain(std::string param[100])
{
	std::cout << "Brain Const Param Called" << '\n';
	int	i = 0;
	while (i < 100)
	{
		this->ideas[i] = param[i];
		i++;
	}
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy One Called" << '\n';
	*this = other;
}

Brain&Brain::operator=(const Brain &other)
{
	std::cout << "Brain Assignment Called" << '\n';
	int	i = 0;
	while (i < 100)
	{
		this->ideas[i] = other.ideas[i];
		i++;
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << '\n';
}