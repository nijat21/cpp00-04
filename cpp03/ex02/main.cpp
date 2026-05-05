#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    ClapTrap A("INFLATION");
    ScavTrap B("POPULATION");
    FragTrap C("CONSUMERISM");

    std::cout << "--------------------------------------" << std::endl;
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
    C.attack("POPULATION");
    B.takeDamage(30);
    std::cout << "--------------------------------------" << std::endl;
    B.showStatus();
    C.showStatus();
    std::cout << "--------------------------------------" << std::endl;
    A.beRepaired(3);
    A.attack("POPULATION");
    B.beRepaired(30);
    B.guardGate();
    std::cout << "--------------------------------------" << std::endl;
    B.showStatus();
    std::cout << "--------------------------------------" << std::endl;
    B.attack("CONSUMERISM");
    C.takeDamage(20);
    std::cout << "--------------------------------------" << std::endl;
    A.showStatus();
    B.showStatus();
    C.showStatus();
    std::cout << "--------------------------------------" << std::endl;
}