/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:02:03 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/26 15:55:53 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << "-------------------------" << '\n';
	const Animal* meta = new Animal;
	const Animal* j = new Dog;
	const Animal* i = new Cat;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //any animal sound!
	delete i;
	delete j;
	delete meta;
	std::cout << "------------------" << '\n';
	WrongAnimal	*wa = new WrongCat;
	wa->makeSound();
	delete wa;
	return (0);
}