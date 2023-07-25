/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:25:58 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/24 18:37:53 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					FixedPoint;
		static const int	FracBits = 8;
	public:
		Fixed(void);
		Fixed(Fixed& other);
		Fixed& operator=(Fixed &other);
		~Fixed(void);
		int		getRawBits(void);
		void	setRawBits(int const raw);
};

#endif