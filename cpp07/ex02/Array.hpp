/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 04:01:24 by zasabri           #+#    #+#             */
/*   Updated: 2023/10/26 10:01:36 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

// typedef struct  addressCollector
// {
//     uintptr_t   address;
//     struct addressCollector *next;
// }   t_ac;

// void    addFront(t_ac **list, uintptr_t val);

class   BadMemory : public std::exception
{
    const char    *what(void) const throw();
};

template<class T>
class Array
{
    private:
        T            *elements;
        unsigned int elementsSize;
        //t_ac         *addressSaver;               
    public:
        Array(void)
        {
            std::cout << "Array Constructor Called" << '\n';
            elements = NULL;
            elementsSize = 0;
            //addressSaver = NULL;
        }
        
        Array(unsigned int n)
        {
            std::cout << "Array Paramitrize One Called" << '\n';
            try
            {
                this->elements = new T[n]();
                this->elementsSize = n;
            }
            catch (std::bad_alloc &e)
            {
                std::cerr << e.what() << '\n';
            }
            //addFront(&this->addressSaver, reinterpret_cast<uintptr_t>(this->elements));
        }
        
        Array(const Array &other)
        {
            std::cout << "Array Copy One Called" << '\n';
            try
            {
                this->elements = new T[other.elementsSize]();
                //addFront(&this->addressSaver, reinterpret_cast<uintptr_t>(this->elements));
                for (unsigned int i = 0; i < other.elementsSize; i++)
                    this->elements[i] = other.elements[i];
                this->elementsSize = other.elementsSize;
            }
            catch (std::bad_alloc &e)
            {
                std::cout << e.what() << '\n';
            }
        }
        
        Array&operator=(const Array &other)
        {
            std::cout << "Array Assignment Called" << '\n';
            if (this->elements)
                delete this->elements;
            try
            {
                this->elements = new T[other.elementsSize]();
                //addFront(&this->addressSaver, reinterpret_cast<uintptr_t>(this->elements));
                for (unsigned int i = 0; i < other.elementsSize; i++)
                    this->elements[i] = other.elements[i];
                this->elementsSize = other.elementsSize;
            }
            catch(std::bad_alloc &e)
            {
                std::cerr << e.what() << '\n';
            }
            return (*this);
        }

        ~Array(void)
        {
            std::cout << "Array Destructor" << '\n';
            if (this->elements)
                delete this->elements;
            // if (this->addressSaver)
            // {
            //    while (this->addressSaver)
            //    {
            //        delete this->addressSaver;
            //        //std::cout << addressSaver->address << '\n';
            //        addressSaver = addressSaver->next;
            //    }
            // }
        }
        /*--------------------------------------------------------*/
        T &operator[](long index)
        {
            if (index < 0 || index >= this->elementsSize)
                throw BadMemory();
            return (this->elements[index]);
        }
        
        const T &operator[](long index) const
        {
            if (index < 0 || index >= this->elementsSize)
                throw BadMemory();
            return (this->elements[index]);
        }
        
        unsigned int size(void) const
        {
            if (!this->elements)
                return (0);
            return (this->elementsSize);
        }
};

#endif