#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iomanip>
#include <iostream>

void PhoneBook::add(Contact new_con) {
    if (count == 8)
        contacts[count - 1] = new_con;
    else {
        contacts[count] = new_con;
        count++;
    }
}

void PhoneBook::print_contacts() {
    print_header();
    for (size_t i = 0; i < count; i++)
        contacts[i].print_contact(i);
}

void PhoneBook::print_search_results(size_t f) {
    print_header();
    if (f < count)
        contacts[f].print_contact(f);
}

size_t PhoneBook::get_count() {
    return count;
}
