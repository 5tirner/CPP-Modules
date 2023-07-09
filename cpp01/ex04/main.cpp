/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:20:09 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/09 04:37:31 by zasabri          ###   ########.fr       */
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
	//std::cout << "[" << s << "]" << std::endl;
	return (s);
}

int	streamEditor(std::string FileName, std::string s1, std::string s2)
{
	std::fstream	toOpen;
	char			x;
	int				i;
	std::string		save;
	int				r;

	i = 0;
	save = "\0";
	toOpen.open(FileName, std::ios::in);
	if (!toOpen)
	{
		std::cout << FileName
			<< ": No such file or directory"
			<< std::endl;
		return (1);
	}
	else
	{
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
				std::cout << s2 << x;
				save = "\0";
				i = 0;
			}
			else
			{
				i = 0;
				if (save[0] != '\0')
				{
					//std::cout << "here1";
					std::cout << save;
					std::cout << x;
					save = "\0";
				}
				else
					std::cout << x;
			}
			//std::cout << "[" << save << "]" << std::endl;
		}
	}
	std::cout << std::endl;
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Invalid Number Of Argements" << std::endl;
	else
		return (streamEditor(av[1], av[2], av[3]));
}