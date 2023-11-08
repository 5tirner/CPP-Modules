/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:17:38 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/08 22:24:48 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>
#include <cstring>

/*Orthdox Cannonical Form*/

RPN::RPN(void)
{
    std::cout << "RPN Constructor Called" << '\n';
}

RPN::RPN(std::string operation)
{
    std::cout << "Start Operations..." << '\n';
    int i = 0;
    while (operation[i] && operation[i] == ' ')
        i++;
    if (!std::isdigit(operation[i]))
        throw ("Error ❌");
    std::string numbers, operators;
    while (operation[i])
    {
        if (!std::strchr("+-*/ ", operation[i]) && !std::isdigit(operation[i]))
            throw ("Error ❌");
        if (std::strchr("+-*/", operation[i]))
            operators += operation[i];
        else if (std::isdigit(operation[i]))
            numbers += operation[i];
        i++;
    }
    std::cout << "[Operation Nedded...]" << '\n';
}

RPN::RPN(const RPN &other)
{
    std::cout << &other << '\n';
}

RPN&RPN::operator=(const RPN &other)
{
    std::cout << &other << '\n';
    return (*this);
}

RPN::~RPN(void)
{
    std::cout << "Operation Done" << '\n';
}