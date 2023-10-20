/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 01:10:11 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/20 06:10:27 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
class   Base
{
    public:
        virtual ~Base(void);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};
Base    *generate(void);
void    identify(Base *p);
void    identify(Base &p);

#endif