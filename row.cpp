#include <iostream>
#include <ostream>

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
class   test
{
    int i;
    public:
        void set(int nb)
        {
            this->i = nb;
        }
        int get()
        {
            return (this->i);
        }
        int operator+(test &other)
        {
            int buff = this->i + other.i;
            return (buff);
        }
        test operator++(int)
        {
            this->i += 1;
            return (*this);
        }
        test operator++(void)
        {
            test other;
            other = *this;
            other.i+=1;
            return (other);
        }
};
std::ostream &operator<<(std::ostream &o, test obj)
{
    o << obj.get() << '\n';
    return (o);
}
int main()
{
    // derived a;
    // a.initial(20);
    // std::cout << a.gethlo() << '\n';
    std::string a = "hello", b = " world";
    std::cout << a + b << '\n';
    test obj1, obj2;
    obj1.set(1), obj2.set(1);
    std::cout << obj1 + obj2 << '\n';
    int i = 0;
    i++;
    obj1++;
    ++obj1;
    std::cout << obj1 << '\n';
}