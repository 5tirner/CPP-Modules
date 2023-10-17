/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:45:53 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/17 23:16:46 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serializer::Serializer(void) {}
Serializer::Serializer(const Serializer &other)
{
    std::cout << &other << '\n';
}
Serializer&Serializer::operator=(const Serializer &other)
{
    std::cout << &other << '\n';
    return (*this);
}
Serializer::~Serializer(void) {}