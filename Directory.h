#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "Contact.h"
#include "EvtFramePrincipal.h"
#include "FramePrincipal.h"
#include "MyApp.h"
#include <wx/vector.h>
#include <wx/log.h>



class Directory
{
public:
	Directory();
	~Directory();
	void Set_contact_in_directory(Contact contact);
	void Add_contact(wxString last_name, wxString first_name, wxString phone_number);
	bool Delete_contact(int);
	void Affiche_contact();
	 //Get_contact_from_directory(Contact contact);
private:
	wxVector<Contact>m_list_contact;

};

#endif // DIRECTORY_H
