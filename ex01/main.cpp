#include "ScavTrap.hpp"

int main()
{
    std::cout << "--- CONSTRUCTION ---" << std::endl;
    ScavTrap player("Serena");
    std::cout << "--- ACTIONS ---" << std::endl;
    player.attack("Target-Dummy");
    player.takeDamage(10);
    player.beRepaired(10);
    player.guardGate();
    std::cout << "--- DESTRUCTION ---" << std::endl;
    return 0;
}