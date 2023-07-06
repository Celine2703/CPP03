#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& ref);
		~ScavTrap();

		ScavTrap	&operator=(const ScavTrap& ref);

		void	attack(std::string const& target);
		void	guardGate();
	
	protected:
		static const unsigned int	ScavEnergyPoints = 50;
};

#endif