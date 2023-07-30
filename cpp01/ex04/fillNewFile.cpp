/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillNewFile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 02:57:35 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/30 21:00:51 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sifl.hpp"

void	rp::fillReplaceFile(std::string s1, std::string s2)
{
	std::string		save;
	char			x;
	int				i;

	i = 0;
	save = "\0";
	while (1)
	{
		toOpen >> std::noskipws >> x;
		if (toOpen.eof())
			break;
		if (s1[i] != '\0' && s1[i] == x)
		{
			save = addChar(save, x);
			i++;
			if (!s1[i])
			{
				i = 0;
				toWrite << s2;
				save = "\0";
			}
		}
		else
		{
			i = 0;
			if (save[0] != '\0')
			{		
				toWrite << save;
				toWrite << x;
				save = "\0";
			}
			else
					toWrite << x;
		}
	}
	toOpen.close();
	toWrite.close();
}