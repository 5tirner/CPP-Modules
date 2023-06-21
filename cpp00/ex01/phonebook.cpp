/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:45:26 by zasabri           #+#    #+#             */
/*   Updated: 2023/06/22 00:15:07 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		Contact::GetLen(std::string str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	Contact::ShowAgenda(Contact person)
{
	std::cout<<person.FirstName[0]<<std::endl;
	std::cout<<person.LastName[0]<<std::endl;
	std::cout<<person.PhoneNumber[0];
}

int		Contact::CheckPhoneNumber(std::string Phone)
{
	int	i = 0;
	
	while (Phone[i])
	{
		if (std::isdigit(Phone[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

void	PhoneBook::TakeCareOfAgenda(Contact person, std::string CmdType)
{
	printf("%d\n", person.Index);
	if (CmdType == "ADD")
	{
		std::cout<<"Enter FirstName: "; getline(std::cin, person.SaveFirst);
		if (person.GetLen(person.SaveFirst) == 0)
		{
			std::cout<<"Should Have At Least One Charachter\n";
			std::cout<<"Try Again"<<std::endl; return ;
		}
		std::cout<<"Enter LastName: "; getline(std::cin, person.SaveLast);
		if (person.GetLen(person.SaveLast) == 0)
		{
			std::cout<<"Should Have At Least One Charachter\n";
			std::cout<<"Try Again"<<std::endl; return ;
		}
		std::cout<<"Enter The PhoneNUmber: "; getline(std::cin, person.SavePhone);
		if (person.CheckPhoneNumber(person.SavePhone)
			|| person.GetLen(person.SavePhone) == 0)
		{
			std::cout<<"PhoneNumber Should Only Contain Digits\n"
			<<"Contact Not saved!"<< std::endl; return ;
		}
		person.FirstName[person.Index] = person.SaveFirst;;
		person.LastName[person.Index] = person.SaveLast;
		person.PhoneNumber[person.Index] = person.SavePhone;
		std::cout<<"Contact Added"<<std::endl;
		person.Index++;
		int j = 0;
		while (j < person.Index)
		{
			std::cout<<person.FirstName[j]<<" "
			<<person.LastName[j] << " "
			<<person.PhoneNumber[j]<<std::endl;
			j++;
		}
	}
	else if (CmdType == "SEARCH")
		person.ShowAgenda(person);
	else if (CmdType == "EXIT")
		exit(0);
}

int main()
{
    PhoneBook	book;
	Contact		person;
    std::string	CmdType;

    person.Index = 0;
    while (getline(std::cin, CmdType))
	{
        book.TakeCareOfAgenda(person, CmdType);
	}
}