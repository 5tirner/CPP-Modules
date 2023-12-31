/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 02:08:53 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/19 04:49:51 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base    *generate(void)
{
    std::cout << std::rand() << '\n';
    Base            address;
    uintptr_t       save = reinterpret_cast<uintptr_t>(&address);
    unsigned int    a = static_cast<unsigned int>(save);

    a %= 10;
    if (a < 3)
        return (new A);
    if (a < 6)
        return (new B);
    return (new C);
}