#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap fragt("Zombie");
    fragt.attack("Batman");
    fragt.takeDamage(20);
    fragt.beRepaired(10);
    fragt.highFivesGuys();
    return 0;
}