#include <iostream>

class   parent
{
    public:
        int a;
};

class   child : public parent
{
    public:
        int b;
};

class child2
{
    public:
        int c;
};



int main()
{
    char   *chi;
    child   *a;
    a->b =500;
    std::cout  << a->b << '\n';
}