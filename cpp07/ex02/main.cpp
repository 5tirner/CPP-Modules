/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 04:01:26 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/23 17:00:14 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    //int *a = new int();
    //std::cout << *a << '\n';
    class Array<int> A(-1);
    int i = 0;
    while (i < 50)
    {
        try
        {
            A[i] = i;
        }
        catch(const char *error)
        {
            std::cout << error << '\n';
        }
        i++;
    }
    while (i >= 0)
    {
        try
        {
            std::cout << A[i] << '\n';
        }
        catch(const char * error)
        {
            std::cout << error << '\n';
        }
        i--;
    }
}