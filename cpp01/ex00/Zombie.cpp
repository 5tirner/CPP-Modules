/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:14:46 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/04 18:13:40 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{	
	std::cout << name
		<< ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}

int main()
{
    Zombie	*TWD;
	
	TWD = newZombie("Foo");
	TWD->announce();
	randomChump("RICK GRAMES");
	delete TWD;
}