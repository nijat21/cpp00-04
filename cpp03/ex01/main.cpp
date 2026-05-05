#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    ClapTrap A("INFLATION");
    ScavTrap B("POPULATION");

    A.attack("POPULATION");
    B.takeDamage(10);
    std::cout << "--------------------------------------" << std::endl;
    A.showStatus();
    B.showStatus();
    std::cout << "--------------------------------------" << std::endl;
    B.attack("INFLATION");
    A.takeDamage(20);
    std::cout << "--------------------------------------" << std::endl;
    A.showStatus();
    B.showStatus();
    std::cout << "--------------------------------------" << std::endl;
    B.guardGate();
    A.attack("POPULATION");
    A.beRepaired(3);
    std::cout << "--------------------------------------" << std::endl;
    A.showStatus();
    B.showStatus();
    std::cout << "--------------------------------------" << std::endl;
}