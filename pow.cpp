#include <iostream>
#include <math.h>

class   Fixed
{
    int a;
    public:
        Fixed()
        {
            std::cout<<"def call";
        }
        Fixed(int x)
        {
            this->a = x << 8;
        }
        int to_int(void)
        {
            return (this->a >> 8);
        }
        int ga()
        {
            return this->a;
        }
        Fixed(float x)
        {
            this->a = x * pow(2, 8);
        }
        float to_float()
        {
            return ((float)a / pow(2, 8));
        }
        float gf()
        {
            return (float)this->a;
        }
};
int main()
{
    Fixed o(10);
    std::cout << o.ga() << '\n';
    std::cout << o.to_int() << '\n';
    std::cout << "--------\n";
    Fixed f(2.3f);
    std::cout << f.gf() << '\n';
    std::cout << f.to_float() << '\n';
}