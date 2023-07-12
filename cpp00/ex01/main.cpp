/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:33:18 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/11 10:11:32 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
	<< LastName << "|" << PhoneNum << "|"
	<< NickName << "|" << std::endl;
}

int main()
{
	PhoneBook	Agenda;
	std::string	CmdType;
	int			i = 0;

	while (std::getline(std::cin, CmdType))
	{
		if (CmdType == "ADD")
		{
			if (i < 8 && Agenda.AddToAgenda(&Agenda, i) == 0)
			{
				//std::printf("%d\n", i);
				i++;
			}
			else if (i == 8)
			{
				Agenda.UpToDateAgenda(&Agenda);
				//printf("here\n");
				Agenda.AddToAgenda(&Agenda, 7);
			}
		}
		if (CmdType == "SEARCH")
			Agenda.LookAtAgenda(&Agenda, i);
		if (CmdType == "EXIT")
			break;
	}
}