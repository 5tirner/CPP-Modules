/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:17:50 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/08 22:20:53 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cerr << "Invalid Number Of Argements " << '\n';
    else
    {
        try
        {
            RPN obj(av[1]);
        }
        catch (const char *err)
        {
            std::cerr << err << '\n';
        }
    }
}