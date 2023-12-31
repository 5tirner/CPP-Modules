/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:13:21 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/15 11:53:26 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <cstdlib>
#include <deque>
#include <iostream>
#include <stdexcept>
#include <string>

void    checkArg(std::string av)
{
    int i = 0;
    if(!av[0]) throw ("Error");
    while (av[i])
    {
        if (!std::isdigit(av[i]) && av[i] != '+') throw ("Error");
        if (av[i] == '+' && i != 0)               throw ("Error");
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac < 2)
        std::cerr << "Invalid Number Of Argements" << '\n';
    else
    {
        std::vector<int> container1;
        std::deque<int> container2;
        container1.reserve(ac);
        try
        {
            int i = 1;
            while (av[i])
            {
                checkArg(av[i]);
                int digit = std::atoi(av[i]);
                container1.push_back(digit);
                container2.push_back(digit);
                i++;
            }
        }
        catch (const char *err)
        {
            std::cerr << err << '\n';
            return (1);
        }
        PmergeMe obj1(container1, ac - 1);
        PmergeMe obj2(container2, ac - 1);
    }
    return (0);
}