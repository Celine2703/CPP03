#include "ClapTrap.hpp"

int main()
{
	ClapTrap	ClapTrap1;
	ClapTrap	ClapTrap2("john");
	ClapTrap	ClapTrap3(ClapTrap2);

	ClapTrap1.attack("john");
	ClapTrap2.takeDamage(5);
	ClapTrap2.attack("Nameless");
	ClapTrap1.takeDamage(5);
	ClapTrap1.attack("john");
	for (int i = 0; i < 10; i++)
		ClapTrap2.attack("Nameless");
	ClapTrap2.takeDamage(5);
	std::cout << "Is a deep copy :" << std::endl;
	ClapTrap3.attack("Nameless");
	std::cout << "Back to ClapTrap2" << std::endl;
	ClapTrap2.attack("Nameless");
	ClapTrap2.beRepaired(2);
	ClapTrap2.attack("Nameless");
}