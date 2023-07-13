/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:57:10 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/13 14:21:43 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		PhoneBook::CheckInput(std::string str)
{
		int	i;

		i = len(str);
		if (i == 0)
			return (1);
		if (i != 9)
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
	if (i != 10)
		return (2);
	return (0);
}

std::string	PhoneBook::MakeItTen(std::string str)
{
	std::string	Ten(11, ' ');
	int			i = 0;

	if (len(str) > 9)
	{
		while (i < 9)
		{
			Ten[i] = str[i];
			i++;
		}
		Ten[i] = '.';
		Ten[i + 1] = '\0';
	}
	else
	{
		while (str[i])
		{
			Ten[i] = str[i];
			i++;
		}
		while (i < 10)
		{
			Ten[i] = ' ';
			i++;
		}
		Ten[i] = '\0';
	}
	return (Ten);
}

int		PhoneBook::AddToAgenda(PhoneBook *Agenda, int i)
{
	std::string	First;
	std::string	Last;
	std::string	Number;
	std::string	NickName;
	std::string	Darksec;

	std::cout << "\nYou can add a contact now\n" << std::endl;
	std::cout << "Enter The First Name 🆕 : ";
	std::getline(std::cin, First);
	if (CheckInput(First) == 1)
	{
		std::cout << "\nTry Again, Somthing Wrong ⚠️\n"
		<< "\nBack To Agenda\n"<< std::endl;
		return (1);
	}
	if (CheckInput(First) == 2)
		First = MakeItTen(First);
	/*-------------------------------------------------------------------*/
	std::cout << "Enter The Last Name 🆕 : ";
	std::getline(std::cin, Last);
	if (CheckInput(Last) == 1)
	{
		std::cout << "\nTry Again, Somthing Wrong ⚠️\n"
		<< "\nBack To Agenda\n"<< std::endl;
		return (1);
	}
	if (CheckInput(Last) == 2)
		Last = MakeItTen(Last);
	/*-------------------------------------------------------------------*/
	std::cout << "Enter The Phone Number 🆕 : ";
	std::getline(std::cin, Number);
	if (CheckPhoneNumber(Number) == 1)
	{
		std::cout << "\nTry Again, Somthing Wrong ⚠️\n"
		<< "\nBack To Agenda\n" << std::endl;
		return (1);
	}
	if (CheckPhoneNumber(Number) == 2)
		Number = MakeItTen(Number);
	/*-------------------------------------------------------------------*/
	std::cout << "Enter The Nickname 🆕 : ";
	std::getline(std::cin, NickName);
	if (CheckInput(NickName) == 1)
	{
		std::cout << "\nTry Again, Somthing Wrong ⚠️\n"
		<< "\nBack To Agenda\n" << std::endl;
		return (1);
	}
	if (CheckInput(NickName) == 2)
		NickName = MakeItTen(NickName);
	/*-------------------------------------------------------------------*/
	std::cout << "What is it's dark secret 💀 : ";
	std::getline(std::cin, Darksec);
	if (CheckInput(Darksec) == 1)
	{
		std::cout << "\nTry Again, Somthing Wrong ⚠️\n"
		<< "Back To Adgenda\n" << std::endl;
		return (1);
	}
	if (CheckInput(Darksec) == 2)
		Darksec = MakeItTen(Darksec);
	/*-------------------------------------------------------------------*/
	std::cout << "Contact Is Added Succesfully ✅" << std::endl;
	Agenda->contact[i].SetVal(First, Last, Number, NickName, Darksec);
	std::cout << "\nBack To Agenda\n" << std::endl;
	return (0);
}
