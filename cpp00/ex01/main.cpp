/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:33:18 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/13 14:13:26 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	InfosToUse(void)
{
	std::cout << std::endl;
	std::cout << " ___________________________" << std::endl;
	std::cout << "| 7AYAKA LAH WA BAYAK AKHI  |" << std::endl;
	std::cout << "| DIR ADD BACH TZID CONTACT |" << std::endl;
	std::cout << "| DIR SEARCH BACH TSEARCHI  |" << std::endl;
	std::cout << "| DIR EXIT BACH TEXITI      |" << std::endl;
	std::cout << "|___________________________|\n" << std::endl;
}

void	Contact::SetVal(std::string First, std::string Last,
		std::string Number, std::string Nickname,
		std::string DarkSec)
{
	FirstName	= First;
	LastName	= Last;
	PhoneNum	= Number;
	NickName	= Nickname;
	DarkSecret	= DarkSec;
}

void	Contact::GetVal()
{
	std::cout << "|" << FirstName << "|"
	<< LastName << "|" << NickName << "|"
	<< std::endl;
}

int main()
{
	PhoneBook	Agenda;
	std::string	CmdType;
	int			i = 0;
	
	InfosToUse();
	while (std::getline(std::cin, CmdType))
	{
		if (CmdType == "ADD")
		{
			if (i < 8 && Agenda.AddToAgenda(&Agenda, i) == 0)
				i++;
			else if (i == 8)
			{
				Agenda.UpToDateAgenda(&Agenda);
				Agenda.AddToAgenda(&Agenda, 7);
			}
		}
		else if (CmdType == "SEARCH")
			Agenda.LookAtAgenda(&Agenda, i);
		else if (CmdType == "EXIT")
		{
			std::cout << "THALA" << std::endl;
			break;
		}
		else
			InfosToUse();
	}
}