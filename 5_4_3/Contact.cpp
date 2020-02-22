#include "Contact.h"
#include <iostream>
#include <string>
#include <vector>
#include <optional>

Contact::Contact(std::string name, std::string email, Date bday, relationship_status status)
	: m_name{ name }, m_birthdate { bday }, m_rel_stat{ status }
{
	m_emails.push_back(email);
}

Contact::~Contact()
{

}


std::string Contact::get_name()
{
	return m_name;
}

std::vector<std::string> Contact::get_emails()
{
	return m_emails;
}

Date Contact::get_birthdate()
{
	return m_birthdate;
}

Contact::relationship_status Contact::get_rel_status()
{
	return m_rel_stat;
}

std::optional <std::string> Contact::get_number()
{
	return m_phone_number;
}

std::optional<std::string> Contact::get_address()
{
	return m_address;
}


void Contact::set_name(std::string name)
{
	m_name = name;
}

void Contact::set_birthdate(Date date)
{
	m_birthdate = date;
}

void Contact::set_rel_status(relationship_status status)
{
	m_rel_stat = status;
}

void Contact::set_number(std::string number)
{
	m_phone_number = number;
}

void Contact::set_adress(std::string address)
{
	m_address = address;
}


void Contact::add_email(std::string email)
{

}

void Contact::remove_email(int position)
{
	
}

void Contact::print_contact()
{

}
