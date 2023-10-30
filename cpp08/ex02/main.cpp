/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:08:37 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/30 17:37:55 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>
#include <vector>

int main()
{
    MutantStack <int, std::vector<int>> test;
    std::stack<int> s(test);
    std::cout << test.empty() << '\n';
    return (0);
}