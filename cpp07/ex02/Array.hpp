/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 04:01:24 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/22 04:40:05 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>class Array
{
    private:
        T   *elements;
    public:
        Array(void)
        {
            elements = NULL;
        }
        Array(unsigned int n)
        {
            elements = new (std::nothrow) T[n];
            if (!elements)
                throw("Allocation Failed");
        }
        Array(conts Array &other);
};
#endif