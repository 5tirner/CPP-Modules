#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <algorithm>
int main()
{
    // int p[] = {44454,6456543,5,43,435,2};
    // int n = sizeof(p) / sizeof(p[0]);
    // std::vector<int> arr(p, p + n);
    // for (int i = 0; i < arr.size(); i++)
    //     std::cout << arr[i] << '\n';
    // std::vector<int>r;
    // r.reserve(1111);
    // r.push_back(1);
    // r.push_back(2);
    // r.push_back(5);
    // r.push_back(5);
    // r.push_back(5);
    // r.push_back(1);
    // r.push_back(2);
    // r.push_back(5);
    // r.push_back(5);
    // std::cout << r.size() << '\n' << r.capacity() << '\n';
    // std::list<int> a;
    // a.push_back(1);
    // std::list<int>::iterator it = a.begin();
    // std::cout << *it << '\n';
    std::stack<int> ms;
    std::vector<int> a;
    a.push_back(11);
    std::vector<int>::iterator it = std::find(a.begin(), a.end(), 11);
    if (it != a.end())
        std::cout << *it << '\n';
}