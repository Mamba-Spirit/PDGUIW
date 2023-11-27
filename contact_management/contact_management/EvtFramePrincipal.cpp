#include "EvtFramePrincipal.h"

EvtFramePrincipal::EvtFramePrincipal( wxWindow* parent )
	:
	FramePrincipal( parent )
{
	m_textCtrl_First_Name->SetMaxLength(25);
    m_textCtrl_Last_Name->SetMaxLength(25);
    m_textCtrl_Phone_Number->SetMaxLength(10);
	
}

EvtFramePrincipal::~EvtFramePrincipal(){
    delete repertoire;
}

void EvtFramePrincipal::OnButton_List_Contacts_Click( wxCommandEvent& event )
{
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
		if(m_textCtrl_Phone_Number->GetValue().ToStdString().find_first_not_of("0123456789")!= wxString::npos){
            wxLogMessage("Caution: The phone number can only contain digits!");
            m_textCtrl_Phone_Number->Clear();
        }
		else{
            first_name = m_textCtrl_First_Name->GetValue();
            last_name = m_textCtrl_Last_Name->GetValue();
            phone_number = m_textCtrl_Phone_Number->GetValue();
            
            repertoire->Add_contact(first_name, last_name, phone_number);
            m_textCtrl_First_Name->Clear();
            m_textCtrl_Last_Name->Clear();
            m_textCtrl_Phone_Number->Clear();
			
			m_listBox_Contact->Clear();
            m_listBox_Contact->Append(repertoire->Affiche_contact());
        }
		
	}
	else
	{
		wxLogMessage("Please fill in all the information requested");
	}
}

void EvtFramePrincipal::OnButton_Delete_Contact_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_Delete_Contact_Click
	wxString phone_number;
	if(!((m_textCtrl_First_Name->IsEmpty()) && (m_textCtrl_Last_Name->IsEmpty()) && (m_textCtrl_Phone_Number->IsEmpty()))){
        
        phone_number = m_textCtrl_Phone_Number->GetValue();
        repertoire->To_delete(phone_number);
		
        m_textCtrl_First_Name->Clear();
        m_textCtrl_Last_Name->Clear();
        m_textCtrl_Phone_Number->Clear();
        
        m_listBox_Contact->Clear();
        m_listBox_Contact->Append(repertoire->Affiche_contact());
    }
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

	}

	
}
