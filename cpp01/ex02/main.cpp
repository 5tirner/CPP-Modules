/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:26:00 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/05 16:23:44 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str;
	std::string	*ptr;

	str = "HI THIS IS BRAIN";
	ptr = &str;
	std::string &ref = str;
	std::cout	<< &str << "\n"
		<< ptr << "\n" << &ref
		<< std::endl;
	// std::string	h = "Cool";
	// ref = h;
	// std::cout << str << *ptr << &ref;
	std::cout	<< str << "\n"
		<< *ptr << "\n" << ref
		<< std::endl;
}