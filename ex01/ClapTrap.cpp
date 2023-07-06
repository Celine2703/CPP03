#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->Name = "Nameless";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
	this->Name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = ref;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap	&ref)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->Name = ref.Name;
	this->HitPoints = ref.HitPoints;
	this->EnergyPoints = ref.EnergyPoints;
	this->AttackDamage = ref.AttackDamage;
	return (*this);
}

void	ClapTrap::attack(std::string const& target)
{
	if (this->EnergyPoints == 0 || this->HitPoints == 0)
	{
		std::cout << "ClapTrap " << this->Name << " tried to attack " << target << " but failed ";
		if (this->HitPoints == 0)
			std::cout << "because it is dead !" << std::endl;
		else
			std::cout << "because it has no energy left !" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints == 0)
		std::cout << "ClapTrap " << this->Name << " is already dead !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
		if (this->HitPoints <= amount)
			this->HitPoints = 0;
		else
			this->HitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints == 0)
		std::cout << "ClapTrap " << this->Name << " is already dead !" << std::endl;
	else if (this->EnergyPoints == 0)
		std::cout << "ClapTrap " << this->Name << " tried to heal but has no energy left !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->Name << " is repaired for " << amount << " points of damage!" << std::endl;
		this->HitPoints += amount;
		this->EnergyPoints--;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}