/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:18:31 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/08 18:44:10 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename PARAM>void func(PARAM element)
{
    std::cout << &element << " From This Address This Element Call The  Function" << '\n';
}

template<typename ITER, typename F>void iter(ITER *arrAddress, int arrLen, F func)
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