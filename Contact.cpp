#include "Contact.h"

Contact::Contact()
{
}

Contact::Contact(wxString last_name, wxString first_name, wxString phone_number){
	m_name = last_name;
	m_first_name = first_name;
	m_phone_number = phone_number;
}

Contact::~Contact()
{
}

wxString Contact::Get_first_name(){
	
	return m_first_name;
}
wxString Contact::Get_name(){
	
	return m_name;
}
wxString Contact::Get_phone_number(){
	
	return m_phone_number;
}
void Contact::Set_first_name(wxString first_name){
	
	m_first_name = first_name;
}
void Contact::Set_name(wxString name){
	
	m_name = name;
}
void Contact::Set_phone_number(wxString phone_number){
	
	m_phone_number = phone_number;
}