#include "Contact.hpp"
#include "utils.hpp"
#include <iomanip>
#include <iostream>
#include <string>

void Contact::set_first_name(std::string str) {
    first_name = str;
}

void Contact::set_last_name(std::string str) {
    last_name = str;
}

void Contact::set_nickname(std::string str) {
    nickname = str;
}

void Contact::set_phone_number(std::string str) {
    phone_number = str;
}

void Contact::set_darkest_secret(std::string str) {
    darkest_secret = str;
}

void Contact::add(ContactInput c) {
    if (!(c.first_name.size() && c.last_name.size() && c.nickname.size() && c.phone_number.size() &&
          c.darkest_secret.size()))
        return;
    set_first_name(c.first_name);
    set_last_name(c.last_name);
    set_nickname(c.nickname);
    set_phone_number(c.phone_number);
    set_darkest_secret(c.darkest_secret);
}

void Contact::print_contact(size_t i) {
    std::cout << "|" << std::right << std::setw(10) << i << "|" << std::right << std::setw(10)
              << concat_longer(first_name) << "|" << std::right << std::setw(10)
              << concat_longer(last_name) << "|" << std::right << std::setw(10)
              << concat_longer(nickname) << "|" << std::endl;
}
