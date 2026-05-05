#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
    std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
    if (this != &rhs) {
        ClapTrap::operator=(rhs);
    }
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << getName() << " has been disposed!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << getName() << " attacks " << target << "!" << std::endl;
    ClapTrap::attack(target);
}

void ScavTrap::showStatus() {
    std::cout << "ScavTrap -> " << std::endl;
    ClapTrap::showStatus();
}