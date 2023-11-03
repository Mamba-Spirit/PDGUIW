#include "EvtFramePrincipal.h"
#include "Contact.h"
#include "Directory.h"
EvtFramePrincipal::EvtFramePrincipal( wxWindow* parent )
:
FramePrincipal( parent )
{

}

//Contact *contact = new Contact;
//Directory *repertoire = new Directory;

void EvtFramePrincipal::OnButton_Contacts_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_Contacts_Click

}

void EvtFramePrincipal::OnButton_Add_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_Add_Click
	/*wxString first_name, name, phone_number, affiche;
	if(!((m_textCtrl_First_name->GetValue().IsEmpty()) && (m_textCtrl_Name->GetValue().IsEmpty()) && (m_textCtrl_Number->GetValue().IsEmpty()))){
		first_name = m_textCtrl_First_name->GetValue();
		name = m_textCtrl_Name->GetValue();
		phone_number = m_textCtrl_Number->GetValue();
		contact->Set_first_name(first_name);
		contact->Set_name(name);
		contact->Set_phone_number(phone_number);
		
		repertoire->Set_contact_in_directory(*contact);
	}*/
	
	
	
	
	
	/*else{
		//m_textCtrl_Affichage->AppendText("Please fill in all the information");
		//m_textCtrl_Affichage->Clear();
		wxLogMessage("Please fill in all the information requested");
	}
	delete contact;
	delete repertoire;*/
	
	
}

void EvtFramePrincipal::OnButton_Delete_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_Delete_Click

	
	
}

void EvtFramePrincipal::OnButton_Search_Click( wxCommandEvent& event )
{
// TODO: Implement OnButton_Search_Click
}





/*
void EvtFramePrincipal::OnButtonCelsiusClick( wxCommandEvent& event )
{
// TODO: Implement OnButtonCelsiusClick
    wxString svalue;
    //m_textCtrlCelsius->GetValue();

    double temp_celsius = 0;
    svalue = m_textCtrlCelsius->GetValue();

    if(svalue.ToDouble(&temp_celsius))
    {
        double temp_fahrenheit = (9/5. * temp_celsius) + 32;
        svalue.sprintf(wxT("%.5f"), temp_fahrenheit);
        m_textCtrlLog->AppendText(m_textCtrlCelsius->GetValue() + "°C = " + svalue + "°F\n");
        m_textCtrlCelsius->Clear();
        
       // wxString svalue (_T(""));
       // svalue.Printf(wxT("%.5f"), (9/5.)*temp_celsius + 32);
       // m_textCtrlLog->AppendText(svalue + "°C\n");
        //m_textCtrlCelsius->Clear();
        
        //double temp_fahrenheit = (9./5. * temp_celsius) + 32;
        //std::cout<<"temp : "<< temp_fahrenheit<<std::endl;
    }
    else{
        wxLogError("veuillez saisir un nombre");
    }
    
    
}

void EvtFramePrincipal::OnButtonFahrenheitClick( wxCommandEvent& event )
{

}{//The Following Block is missing a closing bracket
//and has been set aside by wxFormbuilder

// TODO: Implement OnButtonFahrenheitClick

      //  /*wxString svalue = m_textCtrlFahrenheit->GetValue();
        double temp_fahrenheit = 0;
        if(svalue.ToDouble(&temp_fahrenheit)){

            double temp_celsius = 5/9. * (temp_fahrenheit-32);
            svalue.sprintf(wxT("%.5f"), temp_celsius);
            m_textCtrlLog->AppendText(m_textCtrlFahrenheit->GetValue() + "°F = " + svalue + "°C\n");
            m_textCtrlFahrenheit->Clear();
        }
        else{
            wxLogError("Veuillez saisir un nombre");
        }*/


//
