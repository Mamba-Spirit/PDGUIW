#ifndef DIRECTORY_H
#define DIRECTORY_H


//#include "EvtFramePrincipal.h"
//#include "FramePrincipal.h"
//#include "MyApp.h"
#include <wx/vector.h>
#include "Contact.h"
//#include <wx/log.h>


class Directory
{
public:
	Directory();
	~Directory();
	//void Set_contact_in_directory(Contact contact);
	void Add_contact(wxString &first_name, wxString &last_name, wxString &phone_number);
	bool Delete_contact(int);
	wxString Affiche_contact();
	wxString print_search_result();
	wxVector<Contact> Get_Search_result();
	wxVector<Contact> Get_list_contact();
	wxVector<Contact> Search(wxVector<Contact>list_contact, const wxString &first_name="", const wxString &last_name="", const wxString &phone_number="");
	//Get_contact_from_directory(Contact contact);
	wxVector<Contact> Vider_Vector(wxVector<Contact>search_result);
private:
	wxVector<Contact>m_list_contact;
	wxVector<Contact>m_search_result;
};

#endif // DIRECTORY_H
