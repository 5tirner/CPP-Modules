/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:14:46 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/11 04:01:49 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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