#include <iostream>
#include <string>
#include <bitset>

class a
{
	public:
		int e;
};
class b
{
	public:
		int c;
};
template <typename T>
void func(T data)
{
	std::cout << "Temp\n";
}

void func(char c)
{
	std::cout << 'c' << '\n';
}
int main()
{
	func('a');
}