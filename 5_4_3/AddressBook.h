#pragma once
#include <vector>
class Contact;

class AddressBook
{
public:
	std::vector<Contact*> get_contacts();

	void add_contact(Contact* c);

	void remove_contact(int pos);
	void clear_contacts();

private:
	std::vector<Contact*> m_contacts;

};
