#include <iostream>
#include <string>
#include <bitset>

void	s(int *i)
{
	while (*i < 100)
	{
		//printf("%d-", *i);
		*i+=1;
	}
}
int main()
{
	std::bitset<sizeof(int) * 8> b("10000");
	std::bitset<sizeof(int) * 8> c("10000");
	unsigned long t = b.to_ulong() + c.to_ulong();
	std::cout << t << '\n';
	int i = 10;
	s(&i);
	printf("%d\n", i);
	return 0;
}