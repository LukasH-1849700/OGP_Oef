#include "AddressBook.h"
#include <vector>
class Contact;

std::vector<Contact*> AddressBook::get_contacts()
{
	return m_contacts;
}

void AddressBook::add_contact(Contact* c)
{
	m_contacts.push_back(c);
}


void AddressBook::remove_contact(int pos)
{
	delete m_contacts[pos];
	m_contacts.erase(m_contacts.begin()+pos);
}

void AddressBook::clear_contacts()
{
	for (Contact* &i : m_contacts)
		delete i;
	m_contacts.clear();
}
