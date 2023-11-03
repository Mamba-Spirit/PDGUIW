#include "Directory.h"

Directory::Directory()
{
}

Directory::~Directory()
{
}

void Directory::Set_contact_in_directory(Contact contact){
	
	m_list_contact.push_back(contact);
}

void Directory::Add_contact(wxString last_name, wxString first_name, wxString phone_number){
	
	m_list_contact.push_back(Contact(last_name, first_name, phone_number));
}
