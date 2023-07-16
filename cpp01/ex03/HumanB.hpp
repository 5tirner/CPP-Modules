#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		*weaponB;
		std::string	nameB;
	public:
		void		attack(void);
		void		setWeapon(Weapon &club);
		void		TakeAddress(Weapon **Bweapon);
		HumanB(std::string name);
};

#endif