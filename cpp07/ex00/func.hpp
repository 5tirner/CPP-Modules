/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 02:50:03 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/22 00:16:11 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_HPP
# define FUNC_HPP

template<typename SWAP>void    swap(SWAP &a, SWAP &b)
{
    SWAP tmp = a;
    a = b;
    b = tmp;
}

template<typename MIN>MIN   min(MIN &a, MIN &b)
{
    if (a < b)
        return (a);
    return (b);
}

template<typename MAX>MAX   max(MAX &a, MAX &b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif