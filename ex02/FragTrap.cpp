#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->Name = "Nameless";
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& ref)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = ref;
}

FragTrap	&FragTrap::operator=(const FragTrap	&ref)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->Name = ref.Name;
	this->HitPoints = ref.HitPoints;
	this->EnergyPoints = ref.EnergyPoints;
	this->AttackDamage = ref.AttackDamage;
	return (*this);
}

void	FragTrap::attack(std::string const& target)
{
	if (this->EnergyPoints == 0 || this->HitPoints == 0)
	{
		std::cout << "FragTrap " << this->Name << " tried to attack " << target << " but failed ";
		if (this->HitPoints == 0)
			std::cout << "because it is dead !" << std::endl;
		else
			std::cout << "because it has no energy left !" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
}

void	FragTrap::highFivesGuys()
{
	if (this->HitPoints == 0)
		std::cout << "FragTrap " << this->Name << " is dead and cannot ask for a high five" << std::endl;
	else
		std::cout << "FragTrap " << this->Name << " is asking for a high five !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}