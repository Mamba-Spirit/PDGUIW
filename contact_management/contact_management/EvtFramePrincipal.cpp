#include "EvtFramePrincipal.h"

EvtFramePrincipal::EvtFramePrincipal( wxWindow* parent )
	:
	FramePrincipal( parent )
{

}

Directory *repertoire = new Directory;


void EvtFramePrincipal::OnButton_List_Contacts_Click( wxCommandEvent& event )
{
//Directory *repertoire = new Directory;
// TODO: Implement OnButton_List_Contacts_Click
	m_listBox_Contact->Clear();
	m_listBox_Contact->Append(repertoire->Affiche_contact());

}

void EvtFramePrincipal::OnButton_Ajout_Contact_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_Ajout_Contact_Click
	wxString first_name, last_name, phone_number, affiche;
	if(!((m_textCtrl_First_Name->GetValue().IsEmpty()) || (m_textCtrl_Last_Name->GetValue().IsEmpty()) || (m_textCtrl_Phone_Number->GetValue().IsEmpty())))
	{
		first_name = m_textCtrl_First_Name->GetValue();
		last_name = m_textCtrl_Last_Name->GetValue();
		phone_number = m_textCtrl_Phone_Number->GetValue();

		repertoire->Add_contact(first_name, last_name, phone_number);
		m_textCtrl_First_Name->Clear();
		m_textCtrl_Last_Name->Clear();
		m_textCtrl_Phone_Number->Clear();

	}
	else
	{
		wxLogMessage("Please fill in all the information requested");
	}
}

void EvtFramePrincipal::OnButton_Delete_Contact_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_Delete_Contact_Click
	delete repertoire;
	
}

void EvtFramePrincipal::OnButton_Search_Contact_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_Search_Contact_Click
	m_listBox_Contact->Clear();
	wxString first_name, last_name, phone_number, affiche;

	if(!((m_textCtrl_First_Name->IsEmpty()) && (m_textCtrl_Last_Name->IsEmpty()) && (m_textCtrl_Phone_Number->IsEmpty())))
	{	
		first_name = m_textCtrl_First_Name->GetValue();
		last_name = m_textCtrl_Last_Name->GetValue();
		phone_number = m_textCtrl_Phone_Number->GetValue();
		
		repertoire->Search(repertoire->Get_list_contact(), first_name, last_name, phone_number);
		m_listBox_Contact->Append(repertoire->print_search_result());
		//repertoire->Search(repertoire->m_list_contact, first_name, last_name, phone_number);

	}

	
}
