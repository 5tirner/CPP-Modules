#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	private:
		Weapon		&weaponA;
		std::string	nameA;
	public:
		void		attack(void);
		HumanA(std::string name, Weapon &club);
};

#endif