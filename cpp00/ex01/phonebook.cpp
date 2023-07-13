/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:45:26 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/13 10:57:53 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		len(std::string str)
{
	int	i = 0;
	
	while (str[i])
		i++;
	return (i);
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