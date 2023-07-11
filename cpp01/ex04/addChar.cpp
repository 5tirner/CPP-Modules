/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addchar.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 02:33:28 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/11 02:34:36 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sifl.hpp"

int			sLen(std::string str)
{
	int	i = 0;
	
	while (str[i])
		i++;
	return (i);
}

std::string	addChar(std::string str, char c)
{
	std::string	s(sLen(str) + 2, ' ');
	int			i;

	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;	
	}
	s[i] = c;
	s[i + 1] = '\0';
	return (s);
}