/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:08:37 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/03 17:29:34 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <vector>

int main()
{
    //std::cout << "My Tests" << '\n';
    // MutantStack <int> test;
    // std::stack<int> s(test);
    // std::cout << test.empty() << '\n';
    // std::cout << "Push An Element To teststack\n";
    // test.push(100);
    // std::cout << test.empty() << '\n';
    // std::cout << test.size() << '\n';
    // std::cout << test.top() << '\n';
    // MutantStack<int>::iterator b = test.begin();
    // MutantStack<int>::iterator e = test.end();
    // e--;
    // std::cout << "iterator of begin give us: " << *b << '\n';
    // std::cout << "iterator of end   give us: " << *e << '\n';
    std::cout << "Subject Test\n";
    std::cout << "1- Create A Stack\n";
    MutantStack<int> mstack;
    std::cout << "2- Push Two Elemenets\n";
    mstack.push(5);
    mstack.push(17);
    std::cout << "Check Top\n";
    std::cout << mstack.top() << std::endl;
    std::cout << "Pop The First Element\n";
    mstack.pop();
    std::cout << "Check Size\n";
    std::cout << mstack.size() << std::endl;
    std::cout << "Push Four Elements\n";
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "Create Two Iterators For the Begin And The End\n";
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "Call The Copy Constructor Of std::stack<type, underlyingContainer>\n";
    std::stack<int> s(mstack);
    return (0);
}