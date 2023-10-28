/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:21:44 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/26 23:37:29 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char    *notFound::what(void) const throw()
{
    return ("Element Not Found");
}

int main()
{
    std::vector<int> v;
    int arr[10] = {132,43543,54,3453,324,123,435,3214,545,2334};
    for (int i = 0; i < 10; i++)
        v.push_back(arr[i]);
    try
    {
        easyfind(v, 545);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}