/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 04:42:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/28 19:26:50 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout
		<< "debug 🔧 : You have no address onthe memory, GOOO get one.\n"
		<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout
		<< "Info ℹ️  : This programe is for search of a word inside a file.\n"
		<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout
		<< "Warrning ⚠️  : You forget to include the header <unistd.h>.\n"
		<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout
		<< "Error ❌ : use of undeclared identifier \'func\'.\n"
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
	switch (i)
	{
		case 0:
			(ykonKhir.*ptrToMemberFunc[0])();
		case 1:
			(ykonKhir.*ptrToMemberFunc[1])();
		case 2:
			(ykonKhir.*ptrToMemberFunc[2])();
		case 3:
			(ykonKhir.*ptrToMemberFunc[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
	}
}