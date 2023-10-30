/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:45:53 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/30 12:20:07 by zasabri          ###   ########.fr       */
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
    uintptr_t   save;

    save = reinterpret_cast<uintptr_t>(ptr);
    return (save);
}

Data    *Serializer::deserialize(uintptr_t row)
{
    Data    *save;

    save = reinterpret_cast<Data*>(row);
    return (save);
}