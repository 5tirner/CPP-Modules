/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillNewFile.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 02:57:35 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/11 03:09:10 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sifl.hpp"

void	rp::fillReplaceFile(std::string s1, std::string s2)
{
	std::string		save;
	char			x;
	int				i;
	int				r;

	i = 0;
	r = 1;
	save = "\0";
	while (1)
	{
		toOpen >> std::noskipws >> x;
		if (toOpen.eof())
			break;
		if (s1[i] != '\0' && s1[i] == x)
		{
			r = 0;
			save = addChar(save, x);
			i++;
		}
		else if (!s1[i] && r == 0)
		{
			r = 1;
			toWrite << s2 << x;
			save = "\0";
			i = 0;
		}
		else
		{
			i = 0;
			if (save[0] != '\0')
			{		
				toWrite << save;
				save = "\0";
			}
			else
					toWrite << x;
		}
	}
}