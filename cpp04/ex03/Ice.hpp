/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:24:59 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/27 15:37:35 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class   Ice : public AMateria
{
    public:
        Ice(void);
        Ice(std::string type);
        Ice(const Ice &other);
        Ice&operator=(const Ice &other);
        ~Ice(void);
        AMateria    *clone() const;
        void        use(ICharacter &target);
};

#endif