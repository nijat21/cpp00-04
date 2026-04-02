#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];

	public:
		void add(Contact new_contact);
		void replace_eights(Contact new_contact);
		void search();
}


#endif
