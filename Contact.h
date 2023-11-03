#ifndef CONTACT_H
#define CONTACT_H

#include "EvtFramePrincipal.h"
#include "FramePrincipal.h"
#include "MyApp.h"

#include <wx/log.h>
//#include "Directory.h"


class Contact
{
public:
	Contact();
	Contact(wxString last_name, wxString first_name, wxString phone_number);
	~Contact();
	wxString Get_name();
	wxString Get_first_name();
	wxString Get_phone_number();
	
	void Set_name(wxString name);
	void Set_first_name(wxString first_name);
	void Set_phone_number(wxString phone_number);
	

private:

	wxString m_name;
	wxString m_first_name;
	wxString m_phone_number;
	
};

#endif // CONTACT_H
