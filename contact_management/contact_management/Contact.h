#ifndef CONTACT_H
#define CONTACT_H

#include <wx/log.h>

class Contact
{
public:
	Contact();
	Contact(wxString& last_name, wxString& first_name, wxString& phone_number);
	~Contact();
	wxString Get_last_name();
	wxString Get_first_name();
	wxString Get_phone_number();
	
	void Set_last_name(wxString& last_name);
	void Set_first_name(wxString& first_name);
	void Set_phone_number(wxString& phone_number);
	

private:

	wxString m_last_name;
	wxString m_first_name;
	wxString m_phone_number;
};

#endif // CONTACT_H
