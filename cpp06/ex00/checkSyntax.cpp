/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkSyntax.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:01:45 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/17 18:04:44 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string checkSyntax(std::string &s)
{
    int i = 0, point = 0, f = 0, last = s.length() - 1;
    if ((s[i]) && (s[i] == '-' || s[i] == '+'))
        i++;
    while (s[i])
    {
        if (s[i] == '.')
        {
            point++;
            if (point > 1 || s[last] == '.')
                return ("Not A Number");
        }
        else if (s[i] == 'f' && i == last)
        {
            if (s[i - 1] && std::isdigit(s[i - 1]) == 0)
                return ("Not A Number");
            f++;
        }
        else if (s[i] < '0' || s[i] > '9')
            return ("Not A Number");
        i++;
    }
    if (point == 1 && f == 1)
        return ("Float");
    else if (point == 1)
        return ("Double");
    return ("Integer");
}
