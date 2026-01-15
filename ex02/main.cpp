#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "--- FRAGTRAP CREATION ---" << std::endl;
    FragTrap fragt("Zombie");
    std::cout << "--- ACTIONS ---" << std::endl;
    fragt.attack("Batman");
    fragt.takeDamage(20);
    fragt.beRepaired(10);
    fragt.highFivesGuys();
    std::cout << "--- DESTRUCTION SEQUENCE ---" << std::endl;
    return 0;
}