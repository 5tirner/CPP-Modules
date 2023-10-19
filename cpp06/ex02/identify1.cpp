/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 03:51:55 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/19 03:56:16 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void    identify(Base *p)
{
    if (dynamic_cast<B*>(p) == NULL && dynamic_cast<C*>(p) == NULL)
        std::cout << "The Type Of \'p\' Is: [ A ]" << '\n';
    else if (dynamic_cast<A*>(p) == NULL && dynamic_cast<C*>(p) == NULL)
        std::cout << "The Type Of \'p\' Is: [ B ]" << '\n';
    else
        std::cout << "The Type Of \'p\' Is: [ C ]" << '\n';
}