/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:02:03 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/25 16:40:54 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	// char name = 'A';
	// Animal *a[10];
	// int i = 0, j = 5;
	// while (i < 5)
	// {
	// 	a[i] = new Cat(&name);
	// 	a[j] = new Dog(&name);
	// 	i++;
	// 	j++;
	// 	name++;
	// }
	// std::cout << "----------------------------" << '\n';
	// i = 0;
	// while (i < 10)
	// {
	// 	a[i]->makeSound();
	// 	i++;
	// }
	// std::cout << i-- << '\n';
	// std::cout << "--------------------------" << '\n';
	// while (i >= 0)
	// {
	// 	delete a[i];
	// 	i--;
	// }
	Cat test;
	test.makeSound();
	Cat test2 = test;
	test2.makeSound();
}
