///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-234-gd93c9fc0)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/listbox.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class FramePrincipal
///////////////////////////////////////////////////////////////////////////////
class FramePrincipal : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrl_First_Name;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_textCtrl_Last_Name;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textCtrl_Phone_Number;
		wxListBox* m_listBox_Contact;
		wxButton* m_button_List_Contacts;
		wxButton* m_button_Ajout_Contact;
		wxButton* m_button_Delete_Contact;
		wxButton* m_button_Search_Contact;

		// Virtual event handlers, override them in your derived class
		virtual void OnButton_List_Contacts_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButton_Ajout_Contact_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButton_Delete_Contact_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButton_Search_Contact_Click( wxCommandEvent& event ) { event.Skip(); }


	public:

		FramePrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("P.D.G.U.I.W"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,450 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FramePrincipal();

};

