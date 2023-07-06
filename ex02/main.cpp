#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap b("Hilary");
	FragTrap hello, a;
	
	a.attack("Kevin");
	a = b;
	a.attack("Kevin again");
	// for (int i = 0; i < 100; i++)
	//  	a.attack("test to see if energy goes to 0");
	a.takeDamage(10);
	// a.guardGate();
	a.highFivesGuys();
	a.takeDamage(100);
	a.highFivesGuys();
	// a.guardGate();
}