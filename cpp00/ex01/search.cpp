/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:55:52 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/15 08:35:49 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::LookAtAgenda(PhoneBook *Agenda, int n)
{
	int			i = 0;
	std::string	view;

    std::cout << std::endl;
	while (i < n)
	{
		std::cout << i + 1
		<< "        ";
		Agenda->contact[i].GetVal();
		i++;
	}
	std::cout << std::endl << "Your searching now!\n"
	<< "press any number form \' 1 \' to \' 8 \' to see the all infos"
	<< "\nperss \' Q \' to EXIT form search place\n"
	<< std::endl;
	if (n == 0)
		std::cout << "The Agenda is empty\n" << std::endl;
	while (std::getline(std::cin, view))
	{
		if (view == "Q")
			break;
		if (len(view) == 1)
		{
			std::cout << "[" << view[0] << "]\n";
			if ((view[0] < '1' || view[0] > '8') || (view[0] - 48 > n))
				std::cout << "Not avilaible section" << std::endl;
			else
				Agenda->contact->GetVal();
		}
		else
			std::cout << "Bad Input ❌" << std::endl;
	}
	std::cout << "Back To Agenda\n" << std::endl;
}
