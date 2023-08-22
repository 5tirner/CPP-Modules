#include <iostream>

class	rma
{
	private:
		int a;
	public:
		void SetVal(int i)
		{
			a = i;
		}
		int	GetVal(void)
		{
			return (a);
		}
		rma(void)
		{
			std::cout << "Constructor Called" << '\n';
		}
		rma(rma &name)
		{
			std::cout << "Copy One Called" << '\n';
			*this = name;
		}
		rma	&operator=(rma &name)
		{
			std::cout << "Assignement Called" << '\n';
			this->a = name.GetVal();
			return (*this);
		}
};
int main()
{
	rma madrid;
	madrid.SetVal(77);
	rma footballClub = madrid;
	std::cout << madrid.GetVal() << ' ' << footballClub.GetVal() << '\n';
}
