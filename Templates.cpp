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
template<typename T>
class a
{
    public:
        a(T var)
        {
            std::cout << var << '\n';
        }
};

int main()
{
    //std::cout << compare<int, char, 5>(5, 2, 'a') << '\n';
    a obj("Test"); 
    //std::cout << compare('b', 'a', 56) << '\n';
}