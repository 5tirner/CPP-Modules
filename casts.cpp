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

int main()
{
    parent  *ptrToParent;
    child   *ptrToChild;
    ptrToParent = ptrToChild; // allowed
    //ptrToChild = ptrToParent NOT
    std::cout << "P: " << ptrToParent << '\n' << "C: " << ptrToChild << '\n';
    child c1;
    parent p1;
    ptrToParent = &c1; //allowed
    //ptrToChild = &p1 NOT
    std::cout << "P: " << ptrToParent << '\n' << "c1: " << &c1 << '\n';
    std::cout << "-------------------------------------\n";
    ptrToChild = static_cast<child*>(ptrToParent);
    ptrToParent = static_cast<child*>(ptrToChild);
}