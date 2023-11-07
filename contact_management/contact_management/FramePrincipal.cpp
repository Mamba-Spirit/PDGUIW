///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-234-gd93c9fc0)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "FramePrincipal.h"

///////////////////////////////////////////////////////////////////////////

FramePrincipal::FramePrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 300,300 ), wxSize( 800,450 ) );

	wxBoxSizer* bSizerPrincipal;
	bSizerPrincipal = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("First name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer5->Add( m_staticText1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_textCtrl_First_Name = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_textCtrl_First_Name, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer2->Add( bSizer5, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Last name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer6->Add( m_staticText2, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_textCtrl_Last_Name = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_textCtrl_Last_Name, 1, wxALL, 5 );


	bSizer2->Add( bSizer6, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Phone number"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer7->Add( m_staticText3, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_textCtrl_Phone_Number = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_textCtrl_Phone_Number, 1, wxALL, 5 );


	bSizer2->Add( bSizer7, 0, wxEXPAND, 5 );

	m_listBox_Contact = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	bSizer2->Add( m_listBox_Contact, 1, wxALL|wxEXPAND, 5 );


	bSizerPrincipal->Add( bSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_button_List_Contacts = new wxButton( this, wxID_ANY, wxT("Contacts"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button_List_Contacts, 1, wxALL, 5 );

	m_button_Ajout_Contact = new wxButton( this, wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button_Ajout_Contact, 1, wxALL, 5 );

	m_button_Delete_Contact = new wxButton( this, wxID_ANY, wxT("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button_Delete_Contact, 1, wxALL, 5 );

	m_button_Search_Contact = new wxButton( this, wxID_ANY, wxT("Search"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button_Search_Contact, 1, wxALL, 5 );


	bSizerPrincipal->Add( bSizer4, 0, wxEXPAND, 5 );


	this->SetSizer( bSizerPrincipal );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button_List_Contacts->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_List_Contacts_Click ), NULL, this );
	m_button_Ajout_Contact->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Ajout_Contact_Click ), NULL, this );
	m_button_Delete_Contact->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Delete_Contact_Click ), NULL, this );
	m_button_Search_Contact->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Search_Contact_Click ), NULL, this );
}

FramePrincipal::~FramePrincipal()
{
	// Disconnect Events
	m_button_List_Contacts->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_List_Contacts_Click ), NULL, this );
	m_button_Ajout_Contact->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Ajout_Contact_Click ), NULL, this );
	m_button_Delete_Contact->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Delete_Contact_Click ), NULL, this );
	m_button_Search_Contact->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Search_Contact_Click ), NULL, this );

}
