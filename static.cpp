#include <iostream>

// class   foo
// {
//     private:
//         static int t;
//     public:
//         int get_v(void)
//         {
//             return (this->t);
//         }
// };

// int main()
// {
//     foo o;
//     std::cout << o.get_v() << '\n';
// }

// int foo::t = 8;
class   foo
{
    int a;
    public:
        // void set_a(int n) const
        // {
        //     a = n;
        // }
        int b;
        int geta(void) const
        {
            return (a);
        }
        foo(int b)
        {
            this->a = b << 8;
        }
        int    toint(void) const
        {
            return (this->a >> 8);
        }
};

int main()
{
    foo o(6);

    o.toint();
    std::cout << o.toint() << '\n';
    o.b = 100;
    o.b =500;
}