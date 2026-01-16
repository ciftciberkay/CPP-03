#include "ScavTrap.hpp"

int main()
{
    ScavTrap player("Alex");
    player.attack("Mesut");
    player.takeDamage(10);
    player.beRepaired(10);
    player.guardGate();
    return 0;
}