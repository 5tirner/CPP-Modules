#include <iostream>

template<typename V>class here
{
    public:
        here();
};
template<typename V>here<V>::here()
{
    std::cout << "I'm Constructor Of template class" << '\n';
}
template<typename T, typename U, int j>int compare(T a, T b, U c)
{
    return (a - b);
}

int main()
{
    std::cout << compare<int, char, 5>(5, 2, 'a') << '\n';
    class here<int> a;
    //std::cout << compare('b', 'a', 56) << '\n';
}