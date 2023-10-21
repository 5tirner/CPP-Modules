#include <iostream>

class   parent
{
    public:
        int a;
        virtual void func(){}
};

class   child : public parent
{
    public:
        int b;
        void func(){}
};


int main()
{
    child *c = new child;
    parent *p = dynamic_cast<child*>(c);
    void *v = dynamic_cast<void*>(p);
    child *cc = dynamic_cast<child*>(p);
}