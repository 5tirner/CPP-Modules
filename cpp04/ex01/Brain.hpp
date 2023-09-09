/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:31:28 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/09 18:41:49 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	private:
		std::string	ideas;
	public:
		Brain(void);
		Brain(std::string param);
		Brain(const Brain &other);
		Brain&operator=(const Brain &other);
		~Brain(void);
};
#endif