#include "Directory.h"
#include "Contact.h"

Directory::Directory(){
}

Directory::~Directory(){
}

wxVector<Contact> Directory::Get_Search_result(){
	
		return m_search_result;
}

wxVector<Contact> Directory::Get_list_contact(){
		return m_list_contact;
}

void Directory::Add_contact(wxString &first_name, wxString &last_name, wxString &phone_number){
	
	m_list_contact.push_back(Contact(first_name, last_name, phone_number));
}

wxString Directory::Affiche_contact(){
	
	wxString affichage;
	
	if(!m_list_contact.empty()){
		
		for(wxVector<Contact>::size_type i = 0; i < m_list_contact.size(); i++){
		
			affichage += wxString::Format("%s %s %s\n", m_list_contact[i].Get_first_name(), m_list_contact[i].Get_last_name(), m_list_contact[i].Get_phone_number());
		}
	}
	
	else{
		affichage = "Your directory is empty :( \n";
	}
	
	return affichage;
	
}

wxVector<Contact> Directory::Search(wxVector<Contact>list_contact, const wxString &first_name, const wxString &last_name, const wxString &phone_number){
	
	for(wxVector<Contact>::size_type i = 0; i < list_contact.size(); i++){
		
		if(list_contact[i].Get_first_name().Contains(first_name) && list_contact[i].Get_last_name().Contains(last_name) && list_contact[i].Get_phone_number().Contains(phone_number)){
			m_search_result.push_back(list_contact[i]);
		}
	}
	
	return m_search_result;
}

wxString Directory::print_search_result(){
	
	wxString affichage;

	if(!m_search_result.empty()){
		
		for(wxVector<Contact>::size_type i = 0; i < m_search_result.size(); i++){
			affichage += wxString::Format("%s %s %s\n", m_search_result[i].Get_first_name(), m_search_result[i].Get_last_name(), m_search_result[i].Get_phone_number());
		}
	}
	else{
		wxLogMessage("No match with this information");
	}
	
	m_search_result.clear();

	return affichage;
	
}


bool Directory::Get_contact_to_delete(Contact& contact_to_delete, Contact& contact_to_match){
	
		bool flag = false;
		
		if(contact_to_delete.Get_phone_number() == contact_to_match.Get_phone_number()){
			
			flag = true;
		}
		else{
			wxLogMessage("The number that you want to delete does't exist in the directory.");
		}
		
		return flag;
}


bool Directory::To_delete(wxString& phone_number_to_delete){

	bool retour = false;
    
    for(wxVector<Contact>::iterator it = m_list_contact.begin(); it != m_list_contact.end(); ++it) {
        
        if(it->Get_phone_number() == phone_number_to_delete) {
    
            m_list_contact.erase(it);
            retour = true;
            break;  // Sortir de la boucle après la suppression
        }
    }
    if (!retour) {
        wxLogMessage("This number doesn't exist in this directory!");
    }
    return retour;
}

