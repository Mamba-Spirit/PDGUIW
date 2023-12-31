#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <wx/vector.h>
#include "Contact.h"
//#include <wx/log.h>


class Directory
{
public:
	Directory();
	~Directory();
	
	void Add_contact(wxString &first_name, wxString &last_name, wxString &phone_number);
	bool To_delete(wxString& phone_number_to_delete);
	wxString Affiche_contact();
	wxString print_search_result();
	wxVector<Contact> Get_Search_result();
	wxVector<Contact> Get_list_contact();
	wxVector<Contact> Search(wxVector<Contact>list_contact, const wxString &first_name="", const wxString &last_name="", const wxString &phone_number="");
	wxVector<Contact> Vider_Vector(wxVector<Contact>search_result);
	bool Get_contact_to_delete(Contact& contact_to_delete, Contact& contact_to_macth);
private:
	wxVector<Contact>m_list_contact;
	wxVector<Contact>m_search_result;
};

#endif // DIRECTORY_H
