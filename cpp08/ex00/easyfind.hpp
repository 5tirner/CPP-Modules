/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:22:17 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/27 16:59:40 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

class   notFound : public std::exception
{
    public:
        const char *what(void) const throw();
};

template<typename T>
void    easyfind(T &data, int toFind)
{
    std::vector<int> save;
    for (unsigned long i = 0; i < data.size(); i++)
        save.push_back(data[i]);
    std::vector<int>::iterator it = std::find(save.begin(), save.end(), toFind);
    if (it != save.end())
    {
        std::cout << "The Element " << toFind << " Is In Index: "
                  << std::distance(save.begin(), it) << '\n';
    }
    else
        throw notFound();
}

#endif