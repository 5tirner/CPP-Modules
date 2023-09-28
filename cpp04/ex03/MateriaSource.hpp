/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:30:11 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/28 15:08:31 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <string>

class   MateriaSource
{
    MateriaSource(void);
    MateriaSource(std::string name);
    MateriaSource(const MateriaSource &other);
    MateriaSource&operator=(const MateriaSource &other);
    ~MateriaSource(void);
    void    learnMateria(AMateria *other);
    AMateria    *createMateria(std::string const &type);
};

#endif