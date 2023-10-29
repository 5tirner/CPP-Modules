/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:08:59 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/29 16:17:14 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream> 

template<typename data>
class   MutantStack
{
    public:
        MutantStack(void);
        MutantStack(const MutantStack &other);
        MutantStack&operator=(const MutantStack &other);
        ~MutantStack(void);
};

#endif