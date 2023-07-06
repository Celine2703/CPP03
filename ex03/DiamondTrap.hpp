#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& copy);
		~DiamondTrap();

		DiamondTrap	&operator=(const DiamondTrap& copy);

		void	attack(std::string const& target);
		void	whoAmI(void);
	
	private:
		std::string	Name;
};

#endif