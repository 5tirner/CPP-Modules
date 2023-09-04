#include <iostream>

class base
{
    protected:
        int hello; 
    public:
        int gethlo()
        {
            return (hello);
        }
};

class derived : public base
{
    public:
        void initial(int a)
        {
            this->hello = a;
        }
};
int main()
{
    derived a;
    a.initial(20);
    std::cout << a.gethlo() << '\n';
}