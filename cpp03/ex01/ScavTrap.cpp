/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:00:43 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/30 19:04:23 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

Scavtrap::Scavtrap(void)
{
	std::cout << "ScavTrap Constructor Called" << '\n';
}

Scavtrap::Scavtrap(const Scavtrap &other)
{
	std::cout << "ScavTrap Copy Constructor Called" << '\n';
	*this = other;
}

Scavtrap	&Scavtrap::operator=(const Scavtrap &other)
{
	std::cout << "ScavTrap Assignment Called" << '\n';
}