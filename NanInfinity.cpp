#include <iostream>

class b
{
    public:
        int a;
    b&operator=(const b &o)
    {
        this->a = o.a;
        return (*this);
    }
};
class d : public b
{
    public:
        int b;
    d&operator=(const d &o)
    {
        this->a = o.a;
        return (*this);
    }
};

class c : public b
{
    public:
        int b;
    c&operator=(const c &o)
    {
        this->a = o.a;
        return (*this);
    }
};


int main()
{
    // std::cout << "NAN:\n";
    // std::cout << std::stof("nan") << '\n';
    // std::cout << std::stod("nan") << '\n';
    // std::cout << "NANF:\n";
    // std::cout << std::stof("nanf") << '\n';
    // std::cout << std::stod("nanf") << '\n';
    // std::cout << "+INF:\n";
    // std::cout << std::stof("+inf") << '\n';
    // std::cout << std::stod("+inf") << '\n';
    // std::cout << "-INF:\n";
    // std::cout << std::stof("-inf") << '\n';
    // std::cout << std::stod("-inf") << '\n';
    // std::cout << (char)999 << '\n';
    /*implicit cast*/
    b b1;
    b1.a = 1;
    d d1;
    b1 = d1;
    std::cout << b1.a << '\n' << d1.a << '\n';
    //dirived = base not allowed, dirived = other_derived not allowed
}