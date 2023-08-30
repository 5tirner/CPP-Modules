#include <iostream>

/* You can create a subclass with follow this steps:

-> class name_of_the_subclass : access-specifier name_of_the_superclass

1 - name_of_the_subclass: name of the new class which will inherit the base class.
2 - access-specifier: either of private, public or protected.
    (If neither is specified, PRIVATE is taken as default).
3 - name_of_the_superclass: name of the base class

NB:

A derived class doesn’t inherit access to private data members.
However, it does inherit a full parent object,
which contains any private members which that class declares.
*/

class base
{
    private:
        int n;
    public:
        base(void)
        {
            std::cout << "Base Constructor" << std::endl;
        }
        int getn(void)
        {
            return (n);
        }
        void setn(int r)
        {
            n = r;
        }
};

class derived : public base
{
    public:
        derived(void)
        {
            std::cout << "Derived mode Public Constructor" << '\n';
        }
};

class derived2 : private base
{
    public:
        derived2(void)
        {
            std::cout << "Derived mode Private Constructor" << '\n';
        }
        void    resetn(int k)
        {
            setn(k);
        }
        int reget(void)
        {
            return (getn());
        }
};

int main()
{
    base    a;
    std::cout << "--------------" << '\n';
    derived b;
    std::cout << "--------------" << '\n';
    derived2 c;
    std::cout << "--------------" << '\n';
    std::cout << "->Base private number = ";
    a.setn(9);
    std::cout << a.getn() << '\n';
    std::cout << "->Derived Public mode private number = ";
    b.setn(99);
    std::cout << b.getn() << '\n';
    std::cout << "->Derived Private mode private number = ";
    c.resetn(999);
    std::cout << c.reget() << '\n';
    return  0;
}