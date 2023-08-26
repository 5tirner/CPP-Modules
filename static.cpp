#include <iostream>

class   foo
{
    private:
        static int t;
    public:
        int get_v(void)
        {
            return (this->t);
        }
};

int main()
{
    foo o;
    std::cout << o.get_v() << '\n';
}

int foo::t = 8;