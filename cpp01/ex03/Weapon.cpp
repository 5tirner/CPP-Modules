/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:09:20 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/07 19:24:34 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	&Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(const std::string param)
{
	type = param;
}

Weapon::Weapon(std::string crude)
{
	type = crude;
	std::cout << crude
		<< ": A weapon 🔫"<< std::endl;
}

Weapon::~Weapon(void)
{
}