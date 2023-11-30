/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dealers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:03:24 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/30 12:16:43 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

void    dealWithFloat(std::string &s)
{
    std::string nPart = naturalPart(s);
    const char *natural = nPart.c_str();
    std::string fPart = fractioPart(s);
    std::cout << "Char:   ";
    if (nPart.length() > 3)
        std::cout << "impossible";
    else
    {
        char c = static_cast<char>(atoi(natural));
        if (c <= 32 || c >= 127)
            std::cout << "Non displayable";
        else
            std::cout << c;
    }
    std::cout << '\n';
    std::cout << "Int:    " << nPart << '\n';
    std::cout << "Float:  " << s << '\n';
    std::cout << "Double: " << nPart << fPart << '\n';
}

void    dealWithDouble(std::string &s)
{
    std::string nPart = naturalPart(s);
    const char *natural = nPart.c_str();
    std::string fPart = fractioPart(s);
    std::cout << "Char:   ";
    if (nPart.length() > 3)
        std::cout << "impossible";
    else
    {
        char c = static_cast<char>(atoi(natural));
        if (c <= 32 || c >= 127)
            std::cout << "Non displayable";
        else
            std::cout << c;
    }
    std::cout << '\n';
    std::cout << "Int:    " << nPart << '\n';
    std::cout << "Float:  " << s << 'f' << '\n';
    std::cout << "Double: " << nPart << fPart << '\n';
}

void    dealWithInteger(std::string &s)
{
    std::cout << "Char:   ";
    if (s.length() > 3)
        std::cout << "impossible";
    else
    {
        char c = static_cast<char>(atoi(s.c_str()));
        if (c <= 32 || c >= 127)
            std::cout << "Non displayable";
        else
            std::cout << c;
    }
    std::cout << '\n';
    std::cout << "Int:    " << s << '\n';
    std::cout << "Float:  " << s + ".0f" << '\n';
    std::cout << "Double: " << s + ".0" << '\n';
}

void        dealWithInfinity(char c, std::string s)
{
    std::cout << "Char:   impossible" << '\n';
    std::cout << "Int:    impossible" << '\n';
    std::cout << "Float:  " << c << s + "f" << '\n';
    std::cout << "Double: " << c << s << '\n';
}

void        dealWithNaN(std::string s)
{
    std::cout << "Char:   impossible" << '\n';
    std::cout << "Int:    impossible" << '\n';
    std::cout << "Float:  " << s + "f" << '\n';
    std::cout << "Double: " << s  << '\n';
}