/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:45:26 by zasabri           #+#    #+#             */
/*   Updated: 2023/06/23 21:53:35 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		PhoneBook::CheckInput(std::string str)
{
		int	i = 0;

		while (str[i])
			i++;
		if (i == 0)
			return (1);
		if (i > 9)
			return (2);
		return (0);
}

int		PhoneBook::CheckPhoneNumber(std::string Number)
{
	int	i = 0;

	while (Number[i])
	{
		if (std::isdigit(Number[i]) == 0)
			return (1);
		i++;
	}
	if (i == 0)
		return (1);
	if (i > 10)
		return (2);
	return (0);
}

std::string	PhoneBook::MakeItTen(std::string str)
{
	std::string	Ten(11, ' ');
	int			i = 0;
	
	while (i < 9)
	{
		Ten[i] = str[i];
		i++;
	}
	Ten[i] = '.';
	Ten[i + 1] = '\0';
	return (Ten);
}

int		PhoneBook::AddToAgenda(PhoneBook *Agenda, int i)
{
	std::string	First;
	std::string	Last;
	std::string	Number;

	std::cout << "Enter The First Name: ";
	std::getline(std::cin, First);
	if (CheckInput(First) == 1)
	{
		std::cout << "Try Again\nSomthing Wrong ⚠️" << std::endl; return (1);
	}
	if (CheckInput(First) == 2) First = MakeItTen(First);
	/*-------------------------------------------------------------------*/
	std::cout << "Enter The Last Name: ";
	std::getline(std::cin, Last);
	if (CheckInput(Last) == 1)
	{
		std::cout << "Try Again\nSomthing Wrong ⚠️" << std::endl; return (1);
	}
	if (CheckInput(Last) == 2) Last = MakeItTen(Last);
	/*-------------------------------------------------------------------*/
	std::cout << "Enter The Phone Number: ";
	std::getline(std::cin, Number);
	if (CheckPhoneNumber(Number) == 1)
	{
		std::cout << "Try Again\nSomthing Wrong ⚠️" << std::endl; return (1);
	}
	if (CheckPhoneNumber(Number) == 2) Number = MakeItTen(Number);
	/*-------------------------------------------------------------------*/
	std::cout << "Contact Is Added Succesfully ✅" << std::endl;
	Agenda->contact[i].SetVal(First, Last, Number);
	return (0);
}

void	PhoneBook::LookAtAgenda(PhoneBook *Agenda, int n)
{
	int	i = 0;

	if (n > 4)
		n = 4;
	while (i < n)
	{
		std::cout << i + 1;
		Agenda->contact[i].GetVal();
		i++;
	}
}

void	PhoneBook::UpToDateAgenda(PhoneBook *Agenda)
{
	int	i = 0, j = 1;
	
	while (i < 7)
	{
		Agenda->contact[i] = Agenda->contact[j];
		i++;
		j++;
	}
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
				std::printf("%d\n", i);
				i++;
			}
			else if (i == 8)
			{
				Agenda.UpToDateAgenda(&Agenda);
				printf("here\n");
				Agenda.AddToAgenda(&Agenda, 7);
			}
		}
		if (CmdType == "SEARCH")
			Agenda.LookAtAgenda(&Agenda, i);
		if (CmdType == "EXIT")
			break;
	}
}