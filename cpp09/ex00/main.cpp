/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:25:11 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/05 22:34:54 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "Error: could not open file ❌" << std::endl;
    else
    {
        try
        {
            BitcoinExchange obj(av[1]);
        }
        catch (const char *err)
        {
            std::cout << err << std::endl;
        }
    }
    return (0);
}