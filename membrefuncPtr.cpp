#include <iostream>

class name
{
    public:
        int get1()
        {
            return (1);
        }
        int get2()
        {
            return (2);
        }
};

int p(name *obj, int (name::*r)(void))
{
    return (obj->*r)();
}

int t(name *obj, int (name::*y)(void))
{
    int t = (obj->*y)();
    return (t);
}
int main()
{
    name ob;
    std::cout << "check get one: " << p(&ob, &name::get1) << std::endl;
    std::cout << "check get two: " << t(&ob, &name::get2) << std::endl; 
    return (0);
}