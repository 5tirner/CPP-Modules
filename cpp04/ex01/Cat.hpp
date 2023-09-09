/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:08:45 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/09 17:32:30 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		~Cat(void);
		void	makeSound(void) const;
};
#endif