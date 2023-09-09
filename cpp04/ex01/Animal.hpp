/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:02:01 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/09 17:48:07 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		~Animal(void);
		void		setType(std::string tp);
		std::string	getType(void) const;
		virtual void		makeSound(void) const;
};

#endif