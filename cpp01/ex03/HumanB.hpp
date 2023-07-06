#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		*weaponB;
		std::string	name;
	public:
		void		attack(void);
		void		setWeapon(Weapon club);
		HumanB(std::string name);
		~HumanB(void);
};

#endif