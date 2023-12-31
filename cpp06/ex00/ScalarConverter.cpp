/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:17:39 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/17 23:08:58 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    std::cout << &other << '\n';
}
ScalarConverter&ScalarConverter::operator=(const ScalarConverter &other)
{
    std::cout << &other << '\n';
    return (*this);
}
ScalarConverter::~ScalarConverter(void) {}

void    ScalarConverter::convert(std::string s)
{
    s = removeSpaces(s);
    if (s == "nan" || s == "nanf")
        dealWithNaN("nan");
    else if (s == "+inf" || s == "-inf" || s == "-inff" || s == "+inff")
        dealWithInfinity(s[0], "inf");
    else
    {
        std::string type = checkSyntax(s);
        std::cout << "INPUT: " << s << '\n';
        if (type == "Not A Number")
            std::cout << "Not A Valid Syntax ❗" << '\n';
        else
        {
            std::cout << "Your Type Is: " << type << '\n';
            if (type == "Float")
                dealWithFloat(s);
            else if (type == "Double")
                dealWithDouble(s);
            else
                dealWithInteger(s);
        }
    }
}