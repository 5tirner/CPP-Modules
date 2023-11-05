/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:08:59 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/05 20:32:30 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <deque>
# include <iostream> 
# include <stack>
# include <vector>
# include <algorithm>

template<typename data>
class   MutantStack : public std::stack<data>
{
    public:
        typedef typename std::deque<data>::iterator iterator;
        MutantStack(void){};
        MutantStack&operator=(const MutantStack &other)
        {
            if (*this != other)
                return (*this);
            *this = other;
            return (*this);
        }
        iterator    begin()
        {
            return (this->c.begin());
        }

        iterator    end()
        {
            return (this->c.end());
        }

        iterator    begin() const
        {
            return (this->c.begin());
        }

        iterator    end() const
        {
            return (this->c.end());
        }
        ~MutantStack(void){};
};

// template<typename data, typename underlyineContainers>
// class   MutantStack
// {
//     private:
//         std::stack<data, underlyineContainers> mstack;
//     public:
//         MutantStack(void){}
//         MutantStack(const MutantStack &other){}
//         MutantStack&operator=(const MutantStack &other)
//         {
//             std::cout << "Mutant Stack Paramitrize Called" << '\n';
//             this->mstack = other.mstack;
//             return (*this);
//         }
//         ~MutantStack(void){}
        
//         /*stack functions*/
        
//         bool    empty() const //empty
//         {
//             return (mstack.empty());
//         }
        
//         unsigned long size() const //size
//         {
//             return (mstack.size());
//         }
        
//         data top() const //top
//         {
//             return (mstack.top());
//         }
        
//         void push(const data value) //push
//         {
//             mstack.push();
//         }
        
//         void pop() //pop
//         {
//             mstack.pop();
//         }
// };

#endif