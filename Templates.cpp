#include <iostream>

template<typename T, typename U>int compare(T a, T b, U c)
{
    return (a - b);
}

int main()
{
    std::cout << compare<int, char>(5, 2, 'a') << '\n';
    std::cout << compare('b', 'a', 56) << '\n';
}