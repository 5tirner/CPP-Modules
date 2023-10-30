/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:45:56 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/30 12:19:35 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <stdint.h>

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