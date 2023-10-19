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
int main()
{
	// std::bitset<sizeof(int) * 8> b("10000");
	// std::bitset<sizeof(int) * 8> c("10000");
	// unsigned long t = b.to_ulong() + c.to_ulong();
	// std::cout << t << '\n';
	// int i = 10;
	// s(&i);
	// printf("%d\n", i);
	// return 0;
	a *o;
	b *oo;
	a *ooo;

	oo = reinterpret_cast<b*>(o);
}