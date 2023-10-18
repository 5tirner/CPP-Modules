/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:44:11 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/18 18:55:40 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data    *data = new Data;

    data->d = 0;
    data->f = 0.0f;
    data->s2 = "string container";
    uintptr_t save = Serializer::serialize(data);
    std::cout << "uintptr_t: 0x" << std::hex << save << std::endl;
    std::cout << "data     : " << data << '\n';
    /*-------------------------------------------------------------*/
    Data    *data2;
    data2 = Serializer::deserialize(save);
    std::cout << "data2    : " << data2 << '\n';

    delete data2;
}