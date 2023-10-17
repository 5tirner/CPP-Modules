/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removeSpaces.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:00:58 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/17 14:50:00 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string removeSpaces(std::string &s)
{
    std::string r;
    int i = 0, l = s.length() - 1;
    while (l >= 0 && s[l] == ' ')
        l--;
    while (s[i] && s[i] == ' ')
        i++;
    while (i <= l)
    {
        r += s[i];
        i++;
    }
    return (r);
}