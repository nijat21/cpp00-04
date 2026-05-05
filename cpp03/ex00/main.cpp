#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap A("INFLATION");
    ClapTrap B("POPULATION");

    A.attack("POPULATION");
    B.takeDamage(8);
    std::cout << "--------------------------------------" << std::endl;
    A.showStatus();
    B.showStatus();
    std::cout << "--------------------------------------" << std::endl;
    B.attack("INFLATION");
    A.takeDamage(10);
    A.attack("POPULATION");
    A.beRepaired(3);
    std::cout << "--------------------------------------" << std::endl;
    A.showStatus();
    B.showStatus();
    std::cout << "--------------------------------------" << std::endl;
}