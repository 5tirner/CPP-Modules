#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	private:
		std::string	type;
	public:
		const std::string	&getType(void);
		void				setType(const std::string param);
		Weapon(std::string crude);
		~Weapon(void);
};

#endif