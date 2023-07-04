/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:20:35 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/04 18:21:17 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie	*TWD;
	
	TWD = newZombie("Foo");
	TWD->announce();
	randomChump("RICK GRAMES");
	delete TWD;
}