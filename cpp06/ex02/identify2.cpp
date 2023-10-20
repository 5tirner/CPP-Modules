/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 05:02:34 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/20 06:09:31 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void    identify(Base &p)
{
    A   p1;
    B   p2;
    C   p3;
    int r = 0;
    try
    {
        p1 = dynamic_cast<A&>(p);
        std::cout << "Type Of \'p\' is A" << '\n';
        r = 1;
    }
    catch(std::exception &e)
    {
        e.what();   
    }
    if (r == 0)
    {
        try
        {
            p2 = dynamic_cast<B&>(p);
            std::cout << "Type Of \'p\' is B" << '\n';
            r = 1;
        }
        catch(std::exception &e)
        {
            e.what();   
        }
    }
    if (r == 0)
    {
        try
        {
            p3 = dynamic_cast<C&>(p);
            std::cout << "Type Of \'p\' is C" << '\n';
            r = 1;
        }
        catch(std::exception &e)
        {
            e.what();   
        }
    }
}