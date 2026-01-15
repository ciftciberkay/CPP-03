#include "ClapTrap.hpp"

int main()
{
    ClapTrap player_a("Alex");
    ClapTrap player_b("Steve");

    std::cout << "--- ATTACK and ENERGY ---" << std::endl;
    player_a.attack("Steve");
    player_b.takeDamage(0);
    std::cout << "--- REPAIR and STATUS ---" << std::endl;
    player_b.beRepaired(5);
    std::cout << "--- DAMAGE OVERLOAD ---" << std::endl;
    player_a.takeDamage(15);
    player_a.attack("Bandit");
    player_a.beRepaired(10);
    std::cout << "--- DESTRUCTORS ---" << std::endl;    
    return 0;
}