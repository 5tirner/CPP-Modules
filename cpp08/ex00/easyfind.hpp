/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:22:17 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/30 11:34:24 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class   notFound : public std::exception
{
    public:
        const char *what(void) const throw();
};

template<typename T>
void    easyfind(T &data, int toFind)
{
    typename T::iterator it = std::find(data.begin(), data.end(), toFind);
    if (it != data.end())
    {
        std::cout << "The Element " << toFind << " Is In Index: "
                  << std::distance(data.begin(), it) << '\n';
    }
    else
        throw notFound();
}

#endif