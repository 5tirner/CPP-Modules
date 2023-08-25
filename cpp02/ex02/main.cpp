/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:38:13 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/25 10:54:22 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	// Fixed a(30);
	// Fixed b(10);
	// Fixed c;

	// c = a;
	// if (b > a)
	// 	std::cout << "test " << a << std::endl;
	// else
	// 	std::cout << b << std::endl;
	// if (c == a)
	// 	std::cout << "really c == a " << std::endl;
	// else
	// 	std::cout << c << " not equale " << a << std::endl;
	// if (c == b)
	// 	std::cout << "really c == b" << std::endl;
	// else
	// 	std::cout << c << " not equale " << b << std::endl;
	// ++a;
	// b++;
	// std::cout << a << " | " << b << std::endl;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// // std::cout << Fixed::max( a, b ) << std::endl;
	// return (0);
	//std::cout << Fixed (5.5f) << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed(2) + Fixed(2.5f) << std::endl;
	std::cout << Fixed(10) / Fixed(0.0f) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
