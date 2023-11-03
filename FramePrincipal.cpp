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
	this->SetSizeHints( wxSize( 800,450 ), wxSize( 500,500 ) );

	wxBoxSizer* bSizerPrincipal;
	bSizerPrincipal = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer7->Add( m_staticText7, 0, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_Name = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_textCtrl_Name, 1, wxALIGN_CENTER|wxALL, 5 );


	bSizer3->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("FIrst name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer8->Add( m_staticText8, 0, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_First_name = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_textCtrl_First_name, 1, wxALIGN_CENTER|wxALL, 5 );


	bSizer3->Add( bSizer8, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Number"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer9->Add( m_staticText9, 0, wxALIGN_CENTER|wxALL, 5 );

	m_textCtrl_Number = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_textCtrl_Number, 1, wxALIGN_CENTER|wxALL, 5 );


	bSizer3->Add( bSizer9, 1, wxEXPAND, 5 );


	bSizerPrincipal->Add( bSizer3, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_textCtrl_Affichage = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPrincipal->Add( m_textCtrl_Affichage, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_button_Contacts = new wxButton( this, wxID_ANY, wxT("Contacts"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button_Contacts, 1, wxALL, 5 );

	m_button_Add = new wxButton( this, wxID_ANY, wxT("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button_Add, 1, wxALL, 5 );

	m_button_Delete = new wxButton( this, wxID_ANY, wxT("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button_Delete, 1, wxALL, 5 );

	m_button_Search = new wxButton( this, wxID_ANY, wxT("Search"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_button_Search, 1, wxALL, 5 );


	bSizerPrincipal->Add( bSizer10, 0, wxEXPAND, 5 );


	this->SetSizer( bSizerPrincipal );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button_Contacts->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Contacts_Click ), NULL, this );
	m_button_Add->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Add_Click ), NULL, this );
	m_button_Delete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Delete_Click ), NULL, this );
	m_button_Search->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Search_Click ), NULL, this );
}

FramePrincipal::~FramePrincipal()
{
	// Disconnect Events
	m_button_Contacts->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Contacts_Click ), NULL, this );
	m_button_Add->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Add_Click ), NULL, this );
	m_button_Delete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Delete_Click ), NULL, this );
	m_button_Search->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FramePrincipal::OnButton_Search_Click ), NULL, this );

}
