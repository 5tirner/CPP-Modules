/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:09:20 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/05 18:57:25 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	&Weapon::getType(void)
{
	std::string	&refType = type;
	return (refType);
}

void	Weapon::setType(std::string param)
{
	type = param;
}

Weapon::Weapon()
{
	std::cout << "Weapon Was Created" << std::endl;
}

Weapon::Weapon(std::string crude)
{
	type = crude;
	std::cout << crude
		<< ": A weapon 🔫"<< std::endl;
}