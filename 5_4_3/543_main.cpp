#include "Contact.h"
#include "Date.h"
#include "AddressBook.h"
#include <iostream>

int main()
{
	Date bdaybuddy{ 12,10,2000 };
	Date bdaymom{ 20,4,1960 };
	Date bdayboss{ 11,9,1938 };
	Contact buddy{"Ralof of riverwood","xX_360NoScOp3rr_Xx@live.be",bdaybuddy,Contact::relationship_status::Friend};
	Contact mom{ "Karen parent","Karen.parent@hotmail.com",bdaymom,Contact::relationship_status::Parent };
	Contact boss{ "Bob van Boomer","Bob.vanBoomer@msn.com",bdayboss,Contact::relationship_status::Boss };

	AddressBook contacts{};

	contacts.add_contact(&buddy);
	contacts.add_contact(&mom);
	contacts.add_contact(&boss);

	mom.set_address("Bagedant 65, Deergout");

	buddy.set_number("0496669420");

	boss.add_email("Flarg.Tharggsy@telenet.be");

	for (Contact* c:contacts.get_contacts())
		c->print_contact();

	return 0;
}
