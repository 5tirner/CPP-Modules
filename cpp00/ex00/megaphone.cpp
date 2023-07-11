/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:29:37 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/11 04:06:16 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class MegaPhone
{
	public:
		void	ToUpper(std::string str);
};

void	MegaPhone::ToUpper(std::string str)
{
	int	i = 0;
	while (str[i])
	{
		// if (str[i] >= 'a' && str[i] <= 'z')
		// 	str[i] -= 32;
		std::cout << (char)std::toupper(str[i]);
		i++;
	}
}

int main(int ac, char** av)
{
	MegaPhone MyObg;
	int	i = 1;
	
	while (i < ac)
	{
		MyObg.ToUpper(av[i]);
		i++;	
	}
	if (i == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}