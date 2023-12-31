/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:25:11 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/08 20:36:35 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cerr << "Error: could not open file ❌" << std::endl;
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