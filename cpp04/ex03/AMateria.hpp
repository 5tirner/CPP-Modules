/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:48:51 by zasabri           #+#    #+#             */
/*   Updated: 2023/09/28 13:31:53 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CPP
# define AMATERIA_CPP

# include <iostream>


class   ICharacter;
class   AMateria
{
    protected:
        std::string type;
    public:
        AMateria(void);
        AMateria(const std::string &param);
        AMateria(const AMateria &other);
        AMateria&operator=(const AMateria &other);
        virtual ~AMateria(void);
        std::string const   getType() const;
        virtual AMateria    *clone() = 0;
        virtual void        use(ICharacter &target);
};

#endif