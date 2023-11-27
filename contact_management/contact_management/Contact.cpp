#include "Contact.h"

Contact::Contact()
{
}

Contact::Contact(wxString& first_name , wxString& last_name, wxString& phone_number){
	m_last_name = last_name;
	m_first_name = first_name;
	m_phone_number = phone_number;
}

Contact::~Contact()
{
}

wxString Contact::Get_first_name(){
	
	return m_first_name;
}
wxString Contact::Get_last_name(){
	
	return m_last_name;
}
wxString Contact::Get_phone_number(){
	
	return m_phone_number;
}
void Contact::Set_first_name(wxString& first_name){
	
	m_first_name = first_name;
}
void Contact::Set_last_name(wxString& last_name){
	
	m_last_name = last_name;
}
void Contact::Set_phone_number(wxString& phone_number){
	
	m_phone_number = phone_number;
}