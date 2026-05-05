#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

// int main() {
//     DiamondTrap A("GEM");
//     std::cout << "-------------------------------------------------------" << std::endl;
//     A.attack("himself");
//     std::cout << "-------------------------------------------------------" << std::endl;
//     A.whoAmI();
//     std::cout << "-------------------------------------------------------" << std::endl;
//     A.showStatus();
//     std::cout << "-------------------------------------------------------" << std::endl;
//     A.takeDamage(10);
//     std::cout << "-------------------------------------------------------" << std::endl;
//     A.showStatus();
//     std::cout << "-------------------------------------------------------" << std::endl;
// }

int main() {
    std::cout << "=== Creating DiamondTrap ===" << std::endl;
    DiamondTrap diamond("GEM");

    std::cout << "\n=== whoAmI ===" << std::endl;
    diamond.whoAmI();
    std::cout << "-------------------------------------------------------" << std::endl;
    diamond.showStatus();
    std::cout << "-------------------------------------------------------" << std::endl;

    std::cout << "\n=== Inherited abilities ===" << std::endl;
    diamond.attack("enemy");
    std::cout << "-------------------------------------------------------" << std::endl;
    diamond.showStatus();
    std::cout << "-------------------------------------------------------" << std::endl;
    diamond.highFivesGuys();
    diamond.guardGate();
    diamond.takeDamage(50);
    std::cout << "-------------------------------------------------------" << std::endl;
    diamond.showStatus();
    std::cout << "-------------------------------------------------------" << std::endl;
    diamond.beRepaired(25);
    std::cout << "-------------------------------------------------------" << std::endl;
    diamond.showStatus();
    std::cout << "-------------------------------------------------------" << std::endl;

    std::cout << "\n=== Copy test ===" << std::endl;
    DiamondTrap copy(diamond);
    copy.whoAmI();

    std::cout << "\n=== Destruction ===" << std::endl;
    return 0;
}