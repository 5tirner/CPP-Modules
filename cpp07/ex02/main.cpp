/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 04:01:26 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/25 03:35:38 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// void    addFront(t_ac **list, uintptr_t val)
// {
//     t_ac    *r = new t_ac;
//     r->address = val;
//     if (!(*list))
//     {
//         r->next = NULL;
//         *list = r;
//     }
//     else
//     {
//         r->next = *list;
//         *list = r;
//     }
// }

const char  *BadMemory::what() const throw()
{
    return ("Bad Memory");
} 
int main()
{
    class Array<int> A(5);
    int i = 0;
    std::cout << "Initialization\nLoading...\n";
    while (i < 5)
    {
        try
        {
            A[i] = i;
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << '\n';
        }
        i++;
    }
    std::cout << "Print1\n";
    while (i >= 0)
    {
        try
        {
            std::cout << A[i] << '\n';
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
        i--;
    }
    std::cout << "-----------------------------------------------------\n";
    class Array<int> B(A);
    i = 0;
    std::cout << "Print2\n";
    while (i < 10)
    {
        try
        {
            std::cout << B[i] << '\n';
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        i++;
    }
    std::cout << "-----------------------------------------------------\nInitilization\nLoading...\n";
    class Array<int> C(2);
    i = 0;
    while (i < 2)
    {
        C[i] = i;
        i++;
    }
    std::cout << "Reinitialization\nLoading...\n";
    B = C;
    std::cout << "Print3\n";
    while (i >= 0)
    {
        try
        {
            std::cout << B[i] << '\n';
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        i--;
    }
    std::cout << "----------------------------------------------------\nInitialization\nLoading...\n";
    const class Array<char> D(5);
    i = 0;
    char c = 'a';
    while (i < 5)
    {
        try
        {
            D[i] = c;
            c++;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << '\n';
        }
        i++;
    }
    std::cout << "Print4\n";
    while (i >= 0)
    {
        try
        {
            std::cout << D[i] << '\n';
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << '\n';
        }
        i--;
    }
    std::cout << "---------------------------\nCHECK SIZE\n";
    std::cout << A.size() << '\n'
              << B.size() << '\n'
              << C.size() << '\n'
              << D.size() << '\n';
    system("leaks Array");
}