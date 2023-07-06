#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string		Name;
		unsigned int	HitPoints;
		unsigned int	EnergyPoints;
		unsigned int	AttackDamage;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& ref);
		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap& ref);

		void	attack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif