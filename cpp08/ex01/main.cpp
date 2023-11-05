/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:48:51 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/05 20:31:54 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ostream>
#include <vector>

int main()
{
    std::cout << "Main Tests" << '\n';
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << '\n' << "---------------------------------" << '\n';
    std::cout << "My Test\n";
    std::cout << "1: Create A Span" << '\n';
    Span test = Span(10000);
    std::cout << "2: Add Numbers" << '\n';
    for (int i = 0; i < 10000; i++)
    {
        try
        {
            test.addNumber(i);
        }
        catch(const char *err)
        {
            std::cerr << err << '\n';
        }
    }
    // std::cout << "3: Print\n";
    // for (unsigned long i = 0; i < 10000; i++)
    // {
    //     std::cout << "Element" << i << ": " << test[i] << '\n';
    // }
    // std::cout << "4: Print Done.\n";
    std::cout << "5: Try To find Spans" << '\n';
    try
    {
        std::cout << "Shortest Span: ";
        std::cout << test.shortestSpan() << std::endl;
        std::cout << "Longest Span: ";
        std::cout << test.longestSpan() << std::endl;
    }
    catch(const char *err)
    {
        std::cerr << err << '\n';
    }
    std::cout << "6: By Using Assignement Copy Test On sp" << std::endl;
    sp = test;
    std::cout << "------------------------------------------" << std::endl
    << "Add To Much Element Using Range Of Iterators" << std::endl;
    std::cout << "Create A Vector And Fill It" << std::endl;
    std::vector<int> test2;
    test2.reserve(5);
    int data = 71409;
    for (int i = 0; i < 5; i++)
    {
        test2.push_back(data % 10);
        data /= 10;
    }
    //std::cout << test2.capacity() << '\n' << *test2.begin() << '\n' << *test2.end() << '\n';
    std::cout << "Create A New Span" << std::endl;
    Span toFill(5);
    std::cout << "Call The Function" << std::endl;
    try
    {
        toFill.addToMuchElements<std::vector<int> >(test2.begin(), test2.end());
    }
    catch (const char *s)
    {
        std::cout << s << '\n';
    }
    std::cout << "Print To Check" << '\n';
    for (int i = 0; i < 5; i++)
    {
        std::cout << toFill[i] << '\n';
    }
    return (0);
}