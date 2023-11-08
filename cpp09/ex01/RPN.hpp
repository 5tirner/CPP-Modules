/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:17:01 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/08 21:37:09 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <vector>

class   RPN
{
    private:
        std::vector<char> rpnVec;
    public:
        RPN(void);
        RPN(std::string operation);
        RPN(const RPN &other);
        RPN&operator=(const RPN &other);
        ~RPN(void);
};

#endif