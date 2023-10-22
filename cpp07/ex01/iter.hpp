/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:18:31 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/22 03:17:38 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename PARAM>void func(PARAM element)
{
    std::cout << &element << " From This Address This Element Call The  Function" << '\n';
}

template<typename ITER>void iter(ITER *arrAddress, int arrLen, void(*func)(ITER element))
{
    if (arrAddress)
    {
        int i = 0;
        while (i < arrLen)
        {
            if (!arrAddress)
            {
                std::cerr << "This Element " << i << " Trying To Access Lmemory B3ida 3lih " << '\n';
                break;
            }
            std::cout << "Element Of The Array Number " << i << " :" <<'\n';
            func(arrAddress[i]);
            std::cout << '\n';
            i++;
        }
    }
    else
        std::cerr << "Array Have No Address" << '\n';
}

#endif