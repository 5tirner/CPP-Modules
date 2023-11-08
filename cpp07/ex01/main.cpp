/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zasabri <zasabri@student.1337>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 02:05:16 by zasabri           #+#    #+#             */
/*   Updated: 2023/11/08 18:45:40 by zasabri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// int main()
// {
//     int *arr = new int[10];
//     for (int i = 0; i < 10; i++)
//         arr[i] = i;
//     iter(arr, 10, func);
//     std::string *s = new std::string[4];
//     s[0] = "AAA", s[1] = "BBB", s[2] = "CCC", s[3] = "DDDDD";
//     iter(s, 4, func);
//     delete[] arr;
//     return (0);
// }
class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T &x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  iter( tab, 5, print);
  iter( tab2, 5, print);
  return 0;
}