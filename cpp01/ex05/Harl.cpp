/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 04:42:25 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/11 09:51:24 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout
		<< "debug 🔧 : You have no address onthe memory, GOOO get one."
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
		<< "Warrning ⚠️  : You forget to include the header <unistd.h>"
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
	switch (level[0])
	{
		case 'D':
			debug();
			break;
		case 'I':
			info();
			break;
		case 'W':
			warning();
			break;
		case 'E':
			error();
			break;
	}
}