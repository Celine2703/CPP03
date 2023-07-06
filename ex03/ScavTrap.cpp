#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->Name = "Nameless";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& ref)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = ref;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap	&ref)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->Name = ref.Name;
	this->HitPoints = ref.HitPoints;
	this->EnergyPoints = ref.EnergyPoints;
	this->AttackDamage = ref.AttackDamage;
	return (*this);
}

void	ScavTrap::attack(std::string const& target)
{
	if (this->EnergyPoints == 0 || this->HitPoints == 0)
	{
		std::cout << "ScavTrap " << this->Name << " tried to attack " << target << " but failed ";
		if (this->HitPoints == 0)
			std::cout << "because it is dead !" << std::endl;
		else
			std::cout << "because it has no energy left !" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
}

void	ScavTrap::guardGate()
{
	if (this->HitPoints == 0)
		std::cout << "ScavTrap " << this->Name << " is dead and cannot enter in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << this->Name << " has entered in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}