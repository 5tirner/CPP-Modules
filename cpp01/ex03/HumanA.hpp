#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	private:
		Weapon		&weaponA;
		std::string	name;
	public:
		void		attack(void);
		HumanA(std::string name, Weapon &club);
		~HumanA(void);
};

#endif