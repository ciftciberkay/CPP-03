#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) 
    : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Default Constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &right)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = right;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &right)
{
    std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
    if (this != &right)
    {
        this->_name = right._name;
        this->_hitPoints = right._hitPoints;
        this->_energyPoints = right._energyPoints;
        this->_attackDamage = right._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap Destructor called for " << _name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target 
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " cannot attack (No energy or hit points left)." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        if (amount >= _hitPoints)
            _hitPoints = 0;
        else
            _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount 
                  << " damage! Current HP: " << _hitPoints << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " is already down!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " repairs itself, recovering " 
                  << amount << " hit points! Current HP: " << _hitPoints << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " cannot repair (No energy or hit points left)." << std::endl;
}