#pragma once
#include <string>
#include <vector>
#include <optional>
#include "Date.h"

class Contact
{
public:
	enum class relationship_status { Friend, Parent, Child, Significant_Other, Colleague, Boss, Employee, Stranger};

	Contact(std::string name, std::string email, Date bday, relationship_status status);

	std::string get_name();
	std::vector<std::string> get_emails();
	Date get_birthdate();
	relationship_status get_rel_status();
	std::optional <std::string> get_number();
	std::optional <std::string> get_address();

	void set_name(std::string name);
	void set_birthdate(Date date);
	void set_rel_status(relationship_status status);
	void set_rel_status(std::string status);
	void set_number(std::string number);
	void set_address(std::string address);

	void add_email(std::string email);
	void remove_email(int position);

	void print_contact();

	std::string get_status_str();

private:
	std::string m_name;
	std::vector<std::string> m_emails;
	Date m_birthdate;
	relationship_status m_rel_stat;
	std::optional<std::string> m_phone_number{};
	std::optional<std::string> m_address{};

};

