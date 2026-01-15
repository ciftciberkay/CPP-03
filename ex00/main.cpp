#include "ClapTrap.hpp"

int main()
{
    ClapTrap player_a("Alex");
    ClapTrap player_b("Steve");

    player_a.attack("Steve");
    player_b.takeDamage(0);
    player_b.beRepaired(5);
    player_a.takeDamage(15);
    player_a.attack("Bandit");
    player_a.beRepaired(10);
    return 0;
}