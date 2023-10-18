/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:45:53 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/18 07:17:00 by zasabri          ###   ########.fr       */
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

uintptr_t   Serializer::serialize(Data *ptr)
{
    std::uintptr_t   save;

    save = reinterpret_cast<std::uintptr_t>(ptr);
    return (save);
}

Data    *Serializer::deserialize(uintptr_t row)
{
    Data    *save;

    save = reinterpret_cast<Data*>(row);
    return (save);
}