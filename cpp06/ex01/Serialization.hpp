/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:45:56 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/18 07:23:42 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>

typedef struct  S_Data
{
    std::string s2;
    int         d;
    float       f;
}   Data;

class   Serializer
{
    private:
        Serializer(void);
        Serializer(const Serializer &other);
        Serializer&operator=(const Serializer &other);
        ~Serializer(void);
    public:
        static uintptr_t    serialize(Data *ptr);
        static Data         *deserialize(uintptr_t raw);
};

#endif