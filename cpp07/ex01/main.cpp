/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 02:05:16 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/26 10:11:03 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
        arr[i] = i;
    iter(arr, 10, func);
    std::string *s = new std::string[4];
    s[0] = "AAA", s[1] = "BBB", s[2] = "CCC", s[3] = "DDDDD";
    iter(s, 4, func);
    delete[] arr;
    return (0);
}