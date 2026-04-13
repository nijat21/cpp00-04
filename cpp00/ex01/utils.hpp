#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

bool is_phone_number(std::string str);
bool is_number(std::string str);
std::string concat_longer(std::string str);
std::string concat_spaces(std::string str);
void print_header();
std::string to_lower(std::string s);

#endif