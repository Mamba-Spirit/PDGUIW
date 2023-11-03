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
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl_Name;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textCtrl_First_name;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textCtrl_Number;
		wxTextCtrl* m_textCtrl_Affichage;
		wxButton* m_button_Contacts;
		wxButton* m_button_Add;
		wxButton* m_button_Delete;
		wxButton* m_button_Search;

		// Virtual event handlers, override them in your derived class
		virtual void OnButton_Contacts_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButton_Add_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButton_Delete_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButton_Search_Click( wxCommandEvent& event ) { event.Skip(); }


	public:

		FramePrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("P.D.G.U.I.W"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~FramePrincipal();

};

