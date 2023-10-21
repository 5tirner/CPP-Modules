/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 02:50:03 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/21 03:40:16 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_HPP
# define FUNC_HPP

template<typename t>void    swap(t &a, t &b)
{
    t tmp = a;
    a = b;
    b = tmp;
}

//template<typename>

#endif