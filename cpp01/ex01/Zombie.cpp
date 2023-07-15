/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:26:56 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/15 07:21:27 by zasabri          ###   ########.fr       */
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