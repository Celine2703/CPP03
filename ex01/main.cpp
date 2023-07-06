#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap b("Hilary");
	ScavTrap hello, a;
	
	a.attack("Kevin");
	a = b;
	a.attack("Kevin again");
	// for (int i = 0; i < 50; i++)
	// 	a.attack("test to see if energy goes to 0");
	a.takeDamage(10);
	a.guardGate();
	a.takeDamage(100);
	a.guardGate();
}