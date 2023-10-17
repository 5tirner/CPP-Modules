/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:45:56 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/17 18:47:41 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

class   Serializer
{
    Serializer(void);
    Serializer(const Serializer &other);
    Serializer&operator=(const Serializer &other);
    ~Serializer(void);
};

#endif