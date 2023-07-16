/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:14:46 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/16 19:05:36 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << name + " Zombie Destroyed!" << std::endl;
}

void	Zombie::SetVal(std::string str)
{
	name = str;
}
void	Zombie::announce(void)
{	
	std::cout << name
		<< ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}