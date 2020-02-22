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

void Contact::set_rel_status(std::string status)
{
	if (status.compare("Friend"))
		m_rel_stat = relationship_status::Friend;
	else if (status.compare("Parent"))
		m_rel_stat = relationship_status::Parent;
	else if (status.compare("Child"))
		m_rel_stat = relationship_status::Child;
	else if (status.compare("Significant other"))
		m_rel_stat = relationship_status::Significant_Other;
	else if (status.compare("Boss"))
		m_rel_stat = relationship_status::Boss;
	else if (status.compare("Employee"))
		m_rel_stat = relationship_status::Employee;
	else if (status.compare("Colleague"))
		m_rel_stat = relationship_status::Colleague;
	else if (status.compare("Stranger"))
		m_rel_stat = relationship_status::Stranger;
}

void Contact::set_number(std::string number)
{
	m_phone_number = number;
}

void Contact::set_address(std::string address)
{
	m_address = address;
}


void Contact::add_email(std::string email)
{
	m_emails.push_back(email);
}

void Contact::remove_email(int position)
{
	m_emails.erase(m_emails.begin()+position);
}

void Contact::print_contact()
{
	using std::cout;

	cout << "Name: " << m_name << '\n'
		 << "Birthdate: " << m_birthdate.get_date() << '\n'
		 << "Relationship: " << get_status_str() << '\n'
		 << "E-mail(s):\n";

	for (int i = 0; i < m_emails.size(); ++i)
		cout << "  " << i+1 << ". " << m_emails[i] << '\n';

	if (m_phone_number.has_value())
		cout << "Phone number: " << m_phone_number.value() << '\n';

	if (m_address.has_value())
		cout << "Address: " << m_address.value() << '\n';

	cout << '\n';
}

std::string Contact::get_status_str()
{
	switch (m_rel_stat) {
	case relationship_status::Friend:
		return "Friend";
		break;
	case relationship_status::Parent:
		return "Parent";
		break;
	case relationship_status::Child:
		return "Child";
		break;
	case relationship_status::Significant_Other:
		return "Significant other";
		break;
	case relationship_status::Boss:
		return "Boss";
		break;
	case relationship_status::Employee:
		return "Employee";
		break;
	case relationship_status::Colleague:
		return "Colleague";
		break;
	case relationship_status::Stranger:
		return "Stranger";
		break;
	default:
		return "None";
	}
}
