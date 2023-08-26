/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:48:58 by zasabri           #+#    #+#             */
/*   Updated: 2023/08/25 16:57:23 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point(void);
		Point(const Point &otehr);
		Point &operator=(const Point &other);
		~Point(void);		
};

#endif