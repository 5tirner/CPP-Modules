/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:29:12 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/27 15:37:08 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class   Cure : public AMateria
{
    public:
        Cure(void);
        Cure(std::string type);
        Cure(const Cure &other);
        Cure&operator=(const Cure &other);
        ~Cure(void);
        AMateria    *clone() const;
        void        use(ICharacter &target);
           
};

#endif