#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::Name = "Nameless_clap_name";
	this->Name = "Nameless";
	this->EnergyPoints = ScavEnergyPoints;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	// ClapTrap::Name = name + "_clap_name";
	this->Name = name;
	this->EnergyPoints = ScavEnergyPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = ref;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap	&ref)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	this->Name = ref.Name;
	this->HitPoints = ref.HitPoints;
	this->EnergyPoints = ref.EnergyPoints;
	this->AttackDamage = ref.AttackDamage;
	this->ClapTrap::Name = ref.ClapTrap::Name;
	return (*this);
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	if (this->HitPoints == 0)
		std::cout << "DiamondTrap " << this->Name << " is dead and cannot enter in Gate keeper mode" << std::endl;
	else
		std::cout << "DiamondTrap name is " << this->Name << " and its ClapTrap name is " << ClapTrap::Name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}