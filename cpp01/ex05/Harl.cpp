/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 04:42:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/15 09:59:40 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout
		<< "Debug 🔧 : You have no address on the memory, GOOO get one."
		<< std::endl;
}

void	Harl::info(void)
{
	std::cout
		<< "Info ℹ️  : This programe is for search of a word inside a file."
		<< std::endl;
}

void	Harl::warning(void)
{
	std::cout
		<< "Warrning ⚠️  : You forget to include the header <unistd.h>."
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout
		<< "Error ❌ : use of undeclared identifier \'func\'."
		<< std::endl;
}

void	Harl::complain(std::string level)
{
	Harl		ykonKhir;
	std::string	levels[4];
	int			i = 0;
	void	(Harl::*ptrToMemberFunc[])(void)
	= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	while (i < 4 && level != levels[i])
		i++;
	(ykonKhir.*ptrToMemberFunc[i])();
}