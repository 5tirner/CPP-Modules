/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:30:35 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/17 22:21:56 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    ScalarConverter a;
    a.convert("555");
    if (ac == 1)
        std::cout << "Add Some Numbers To Convert" << '\n';
    int i = 1;
    while (av[i])
    {
        std::cout << "Result Of The Argement Number: " << i << '\n';
        ScalarConverter::convert(av[i]);
        i++;
    }
    return (0);
}