/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getTwoParts.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:21:29 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/17 15:27:51 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string naturalPart(std::string &s)
{
    std::string r;
    int i = 0;
    while (s[i] && s[i] != '.')
    {
        r += s[i];
        i++;
    }
    return (r);
}

std::string fractioPart(std::string &s)
{
    std::string r;
    int i = 0;
    while (s[i] && s[i] != '.')
        i++;
    while (s[i] && s[i] != 'f')
    {
        r += s[i];
        i++;
    }
    return (r);
}