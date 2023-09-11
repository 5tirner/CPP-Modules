#include <iostream>

class   club
{
    protected:
        std::string club_name;
    public:
        virtual void    announce(void)
        {
            std::cout << "Football Club" << '\n';
        }
};

class   RealMadrid : public club
{
    public:
        void announce(void)
        {
            std::cout << "Real Madrid Football Club" << '\n';
        }
};

class   Barcelona : public club
{
    public:
        void announce(void)
        {
            std::cout << "Barcelona Football Club" << '\n';
        }
};

void    callannounce(club *c)
{
    c->announce();
}

int main()
{
    club *c1 = new club;
    club *c2 = new RealMadrid;
    club *c3 = new Barcelona;
    callannounce(c1);
    callannounce(c2);
    callannounce(c3);

}