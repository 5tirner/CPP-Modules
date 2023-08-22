/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:26:27 by zasabri           #+#    #+#             */
/*   Updated: 2023/07/30 21:46:20 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					FixedPoint;
		static const int	FractBits = 8;
	public:
		Fixed(void);
		Fixed(int const d);
		Fixed(float const f);
		Fixed(Fixed const &other);
		Fixed	&operator=(Fixed const &other);
		~Fixed(void);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &other);

#endif