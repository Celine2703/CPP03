#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap b("Hilary");
	DiamondTrap hello, a;

	b.whoAmI();
	a.attack("Tim");
	// for (int i = 0; i < 50; i++)
	// 	a.attack("test to see if energy goes to 0");
	a = b;
	a.attack("Tim again");
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	a.takeDamage(99);
	a.guardGate();
    a.whoAmI();
	a.highFivesGuys();
	a.beRepaired(1);
	a.takeDamage(1);
	a.highFivesGuys();
	a.takeDamage(1);
	a.highFivesGuys();



}