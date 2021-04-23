/***************************************************************
 * Name:      EvergladesUIMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2020-11-26
 * Copyright:  ()
 * License:
 **************************************************************/

#include "EvergladesUIMain.h"
#include "Python.h"
#include <wx/utils.h>
#include <wx/msgdlg.h>


//(*InternalHeaders(EvergladesUIFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(EvergladesUIFrame)
const long EvergladesUIFrame::ID_STATICTEXT1 = wxNewId();
const long EvergladesUIFrame::ID_STATICTEXT7 = wxNewId();
const long EvergladesUIFrame::ID_FILEPICKERCTRL1 = wxNewId();
const long EvergladesUIFrame::ID_LISTBOX1 = wxNewId();
const long EvergladesUIFrame::ID_SCROLLEDWINDOW1 = wxNewId();
const long EvergladesUIFrame::ID_STATICTEXT8 = wxNewId();
const long EvergladesUIFrame::ID_CHOICE1 = wxNewId();
const long EvergladesUIFrame::ID_STATICBITMAP1 = wxNewId();
const long EvergladesUIFrame::ID_STATICTEXT5 = wxNewId();
const long EvergladesUIFrame::ID_STARTBUTTON = wxNewId();
const long EvergladesUIFrame::ID_STATICTEXT6 = wxNewId();
const long EvergladesUIFrame::ID_DIRPICKERCTRL1 = wxNewId();
const long EvergladesUIFrame::ID_STATICTEXT11 = wxNewId();
const long EvergladesUIFrame::ID_RADIOBUTTON6 = wxNewId();
const long EvergladesUIFrame::ID_RADIOBUTTON7 = wxNewId();
const long EvergladesUIFrame::ID_RADIOBUTTON8 = wxNewId();
const long EvergladesUIFrame::ID_STATICTEXT2 = wxNewId();
const long EvergladesUIFrame::ID_RADIOBUTTON1 = wxNewId();
const long EvergladesUIFrame::ID_RADIOBUTTON2 = wxNewId();
const long EvergladesUIFrame::ID_STATICTEXT10 = wxNewId();
const long EvergladesUIFrame::ID_TEXTCTRL3 = wxNewId();
const long EvergladesUIFrame::ID_CHECKBOX1 = wxNewId();
const long EvergladesUIFrame::ID_STATICTEXT4 = wxNewId();
const long EvergladesUIFrame::ID_TEXTCTRL1 = wxNewId();
const long EvergladesUIFrame::ID_BUTTON1 = wxNewId();
const long EvergladesUIFrame::ID_STATICTEXT3 = wxNewId();
const long EvergladesUIFrame::ID_STATICTEXT9 = wxNewId();
const long EvergladesUIFrame::ID_FILEPICKERCTRL2 = wxNewId();
const long EvergladesUIFrame::ID_LISTBOX2 = wxNewId();
const long EvergladesUIFrame::ID_SCROLLEDWINDOW2 = wxNewId();
const long EvergladesUIFrame::ID_STATICTEXT12 = wxNewId();
const long EvergladesUIFrame::ID_CHOICE2 = wxNewId();
const long EvergladesUIFrame::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EvergladesUIFrame,wxFrame)
    //(*EventTable(EvergladesUIFrame)
    //*)
END_EVENT_TABLE()

EvergladesUIFrame::EvergladesUIFrame(wxWindow* parent,wxWindowID id)
{
    // Set Lockheed Logo
    LockheedLogo = new wxImage(LockheedLogo_XPM);
    LockheedLogo_BMP = new wxBitmap(LockheedLogo_XPM);
    //(*Initialize(EvergladesUIFrame)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer5;
    wxBoxSizer* BoxSizer7;
    wxBoxSizer* browser_sizer;
    wxBoxSizer* center_sizer;
    wxBoxSizer* config_sizer;
    wxBoxSizer* left_sizer;
    wxBoxSizer* loadoutpreset_sizer;
    wxBoxSizer* main_sizer;
    wxBoxSizer* map_sizer;
    wxBoxSizer* maptype_sizer;
    wxBoxSizer* right_sizer;
    wxBoxSizer* sub1_map_sizer;
    wxBoxSizer* targetingTypeSizer1;
    wxBoxSizer* targetingTypeSizer2;
    wxBoxSizer* wind_sizer;

    Create(parent, wxID_ANY, _("Everglades"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetMinSize(wxSize(1200,650));
    SetBackgroundColour(wxColour(255,255,255));
    main_panel = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, 0, _T("ID_PANEL1"));
    main_panel->SetBackgroundColour(wxColour(255,255,255));
    main_sizer = new wxBoxSizer(wxHORIZONTAL);
    left_sizer = new wxBoxSizer(wxVERTICAL);
    left_sizer->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    playerOneLabel = new wxStaticText(main_panel, ID_STATICTEXT1, _("Player 1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont playerOneLabelFont(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    playerOneLabel->SetFont(playerOneLabelFont);
    BoxSizer1->Add(playerOneLabel, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    agentscriptlabel1 = new wxStaticText(main_panel, ID_STATICTEXT7, _("Agent Script"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    wxFont agentscriptlabel1Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    agentscriptlabel1->SetFont(agentscriptlabel1Font);
    BoxSizer1->Add(agentscriptlabel1, 0, wxTOP|wxLEFT|wxRIGHT|wxALIGN_LEFT, 5);
    agent1picker = new wxFilePickerCtrl(main_panel, ID_FILEPICKERCTRL1, wxEmptyString, _("Agent Script"), wxEmptyString, wxDefaultPosition, wxDefaultSize, wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL, wxDefaultValidator, _T("ID_FILEPICKERCTRL1"));
    BoxSizer1->Add(agent1picker, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 5);
    left_sizer->Add(BoxSizer1, 1, wxLEFT|wxRIGHT|wxEXPAND, 60);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    agent1groupList = new wxListBox(main_panel, ID_LISTBOX1, wxDefaultPosition, wxSize(75,200), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
    BoxSizer2->Add(agent1groupList, 1, wxEXPAND, 0);
    unitinfo_list = new wxScrolledWindow(main_panel, ID_SCROLLEDWINDOW1, wxDefaultPosition, wxSize(-1,-1), wxBORDER_SIMPLE|wxVSCROLL, _T("ID_SCROLLEDWINDOW1"));
    BoxSizer2->Add(unitinfo_list, 2, wxEXPAND, 5);
    left_sizer->Add(BoxSizer2, 2, wxLEFT|wxRIGHT|wxEXPAND, 40);
    targetingTypeSizer1 = new wxBoxSizer(wxHORIZONTAL);
    targetingTypeLabel1 = new wxStaticText(main_panel, ID_STATICTEXT8, _("Targeting Type"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    targetingTypeSizer1->Add(targetingTypeLabel1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    targetingTypeChoice1 = new wxChoice(main_panel, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    targetingTypeSizer1->Add(targetingTypeChoice1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    left_sizer->Add(targetingTypeSizer1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    left_sizer->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    main_sizer->Add(left_sizer, 1, wxALL|wxEXPAND, 5);
    center_sizer = new wxBoxSizer(wxVERTICAL);
    lockheed_logo = new wxStaticBitmap(main_panel, ID_STATICBITMAP1, *LockheedLogo_BMP, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    center_sizer->Add(lockheed_logo, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    everglades_title = new wxStaticText(main_panel, ID_STATICTEXT5, _("Everglades"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    wxFont everglades_titleFont(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    everglades_title->SetFont(everglades_titleFont);
    center_sizer->Add(everglades_title, 0, wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 20);
    start_button = new wxButton(main_panel, ID_STARTBUTTON, _("Start"), wxDefaultPosition, wxDLG_UNIT(main_panel,wxSize(40,20)), 0, wxDefaultValidator, _T("ID_STARTBUTTON"));
    center_sizer->Add(start_button, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxSHAPED, 5);
    config_sizer = new wxBoxSizer(wxVERTICAL);
    browser_sizer = new wxBoxSizer(wxVERTICAL);
    browser_label = new wxStaticText(main_panel, ID_STATICTEXT6, _("Everglades Server"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    wxFont browser_labelFont(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    browser_label->SetFont(browser_labelFont);
    browser_sizer->Add(browser_label, 0, wxTOP|wxLEFT|wxALIGN_LEFT, 5);
    EvergladesDIR_picker = new wxDirPickerCtrl(main_panel, ID_DIRPICKERCTRL1, wxEmptyString, _("Select Everglades Project Path"), wxDefaultPosition, wxDefaultSize, wxDIRP_DIR_MUST_EXIST|wxDIRP_USE_TEXTCTRL, wxDefaultValidator, _T("ID_DIRPICKERCTRL1"));
    browser_sizer->Add(EvergladesDIR_picker, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 5);
    config_sizer->Add(browser_sizer, 0, wxTOP|wxBOTTOM|wxRIGHT|wxEXPAND, 5);
    map_sizer = new wxBoxSizer(wxVERTICAL);
    sub1_map_sizer = new wxBoxSizer(wxHORIZONTAL);
    loadoutpreset_sizer = new wxBoxSizer(wxVERTICAL);
    loadoutpreset_label = new wxStaticText(main_panel, ID_STATICTEXT11, _("Loadout Preset"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    wxFont loadoutpreset_labelFont(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    loadoutpreset_label->SetFont(loadoutpreset_labelFont);
    loadoutpreset_sizer->Add(loadoutpreset_label, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    loadoutpreset_radio1 = new wxRadioButton(main_panel, ID_RADIOBUTTON6, _("Unit Defaults"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP, wxDefaultValidator, _T("ID_RADIOBUTTON6"));
    loadoutpreset_sizer->Add(loadoutpreset_radio1, 1, wxALL|wxALIGN_LEFT, 5);
    loadoutpreset_radio2 = new wxRadioButton(main_panel, ID_RADIOBUTTON7, _("Unit Presets"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON7"));
    loadoutpreset_sizer->Add(loadoutpreset_radio2, 1, wxALL|wxALIGN_LEFT, 5);
    loadoutpreset_radio3 = new wxRadioButton(main_panel, ID_RADIOBUTTON8, _("Unit Customs"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON8"));
    loadoutpreset_sizer->Add(loadoutpreset_radio3, 1, wxALL|wxALIGN_LEFT, 5);
    sub1_map_sizer->Add(loadoutpreset_sizer, 1, wxALL|wxALIGN_TOP, 5);
    sub1_map_sizer->Add(30,1,0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxFIXED_MINSIZE, 5);
    maptype_sizer = new wxBoxSizer(wxVERTICAL);
    map_label = new wxStaticText(main_panel, ID_STATICTEXT2, _("Map"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont map_labelFont(11,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    map_label->SetFont(map_labelFont);
    maptype_sizer->Add(map_label, 1, wxALL|wxALIGN_LEFT, 5);
    maptypeRadio1 = new wxRadioButton(main_panel, ID_RADIOBUTTON1, _("3D"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
    maptype_sizer->Add(maptypeRadio1, 1, wxALL|wxALIGN_LEFT, 5);
    maptypeRadio2 = new wxRadioButton(main_panel, ID_RADIOBUTTON2, _("2D"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
    maptype_sizer->Add(maptypeRadio2, 1, wxALL|wxALIGN_LEFT, 5);
    sub1_map_sizer->Add(maptype_sizer, 1, wxTOP|wxBOTTOM|wxALIGN_TOP, 5);
    map_sizer->Add(sub1_map_sizer, 3, wxTOP|wxBOTTOM|wxRIGHT|wxALIGN_LEFT, 5);
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    turnlimitLabel = new wxStaticText(main_panel, ID_STATICTEXT10, _("Turn Limit"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    BoxSizer7->Add(turnlimitLabel, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    turnlimitInput = new wxTextCtrl(main_panel, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxSize(40,20), 0, wxTextValidator(wxFILTER_DIGITS), _T("ID_TEXTCTRL3"));
    BoxSizer7->Add(turnlimitInput, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    map_sizer->Add(BoxSizer7, 1, wxALL|wxALIGN_LEFT, 5);
    wind_sizer = new wxBoxSizer(wxVERTICAL);
    wind_toggle = new wxCheckBox(main_panel, ID_CHECKBOX1, _("Wind"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    wind_toggle->SetValue(false);
    wxFont wind_toggleFont(11,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    wind_toggle->SetFont(wind_toggleFont);
    wind_sizer->Add(wind_toggle, 0, wxALL|wxALIGN_LEFT, 5);
    stochastic_label = new wxStaticText(main_panel, ID_STATICTEXT4, _("Stochastic seed"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    wxFont stochastic_labelFont(11,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    stochastic_label->SetFont(stochastic_labelFont);
    wind_sizer->Add(stochastic_label, 0, wxTOP|wxLEFT|wxRIGHT|wxALIGN_LEFT, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    stochasticseed_label = new wxTextCtrl(main_panel, ID_TEXTCTRL1, _("0"), wxDefaultPosition, wxSize(125,20), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    stochasticseed_label->Disable();
    BoxSizer3->Add(stochasticseed_label, 4, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 5);
    BoxSizer3->Add(-1,-1,1, wxALL, 5);
    wind_sizer->Add(BoxSizer3, 0, wxBOTTOM|wxRIGHT|wxEXPAND, 5);
    LoadoutToolsButton = new wxButton(main_panel, ID_BUTTON1, _("Loadout Tools"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    LoadoutToolsButton->SetMaxSize(wxSize(-1,60));
    wind_sizer->Add(LoadoutToolsButton, 0, wxALL|wxALIGN_LEFT, 5);
    map_sizer->Add(wind_sizer, 3, wxEXPAND, 10);
    config_sizer->Add(map_sizer, 0, wxTOP|wxEXPAND, 5);
    center_sizer->Add(config_sizer, 0, wxLEFT|wxRIGHT|wxEXPAND, 90);
    center_sizer->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    main_sizer->Add(center_sizer, 1, wxALL|wxEXPAND, 5);
    right_sizer = new wxBoxSizer(wxVERTICAL);
    right_sizer->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4 = new wxBoxSizer(wxVERTICAL);
    playerTwoLabel = new wxStaticText(main_panel, ID_STATICTEXT3, _("Player 2"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    wxFont playerTwoLabelFont(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    playerTwoLabel->SetFont(playerTwoLabelFont);
    BoxSizer4->Add(playerTwoLabel, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    agentscriptlabel2 = new wxStaticText(main_panel, ID_STATICTEXT9, _("Agent Script"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    wxFont agentscriptlabel2Font(11,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    agentscriptlabel2->SetFont(agentscriptlabel2Font);
    BoxSizer4->Add(agentscriptlabel2, 0, wxTOP|wxLEFT|wxRIGHT|wxALIGN_LEFT, 5);
    agent2picker = new wxFilePickerCtrl(main_panel, ID_FILEPICKERCTRL2, wxEmptyString, _("Agent Script"), wxEmptyString, wxDefaultPosition, wxDefaultSize, wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL, wxDefaultValidator, _T("ID_FILEPICKERCTRL2"));
    BoxSizer4->Add(agent2picker, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND, 5);
    right_sizer->Add(BoxSizer4, 1, wxLEFT|wxRIGHT|wxEXPAND, 60);
    BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    agent2groupList = new wxListBox(main_panel, ID_LISTBOX2, wxDefaultPosition, wxSize(75,200), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX2"));
    BoxSizer5->Add(agent2groupList, 1, wxEXPAND, 0);
    unitinfo_list2 = new wxScrolledWindow(main_panel, ID_SCROLLEDWINDOW2, wxDefaultPosition, wxSize(-1,-1), wxBORDER_SIMPLE|wxVSCROLL, _T("ID_SCROLLEDWINDOW2"));
    BoxSizer5->Add(unitinfo_list2, 2, wxEXPAND, 5);
    right_sizer->Add(BoxSizer5, 2, wxLEFT|wxRIGHT|wxEXPAND, 40);
    targetingTypeSizer2 = new wxBoxSizer(wxHORIZONTAL);
    targetingTypeLabel2 = new wxStaticText(main_panel, ID_STATICTEXT12, _("Targeting Type"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    targetingTypeSizer2->Add(targetingTypeLabel2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    targetingTypeChoice2 = new wxChoice(main_panel, ID_CHOICE2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    targetingTypeSizer2->Add(targetingTypeChoice2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    right_sizer->Add(targetingTypeSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    right_sizer->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    main_sizer->Add(right_sizer, 1, wxALL|wxEXPAND, 5);
    main_panel->SetSizer(main_sizer);
    main_sizer->Fit(main_panel);
    main_sizer->SetSizeHints(main_panel);
    LockheedLogo = new wxImage(LockheedLogo_XPM);
    LockheedLogo_BMP = new wxBitmap(LockheedLogo_XPM);
    droneLogo = new wxImage(droneLogo_XPM);
    droneLogo_BMP = new wxBitmap(droneLogo_XPM);

    Connect(ID_FILEPICKERCTRL1,wxEVT_COMMAND_FILEPICKER_CHANGED,(wxObjectEventFunction)&EvergladesUIFrame::OnagentpickerFileChanged);
    Connect(ID_LISTBOX1,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&EvergladesUIFrame::OnagentgroupListSelect);
    Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&EvergladesUIFrame::OntargetingTypeChoice1Select);
    Connect(ID_STARTBUTTON,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EvergladesUIFrame::OnStartButtonClick);
    Connect(ID_DIRPICKERCTRL1,wxEVT_COMMAND_DIRPICKER_CHANGED,(wxObjectEventFunction)&EvergladesUIFrame::OnEvergladesDIR_pickerDirChanged);
    Connect(ID_CHECKBOX1,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&EvergladesUIFrame::OnEnableWind);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EvergladesUIFrame::OnLoadoutToolsButtonClick);
    Connect(ID_FILEPICKERCTRL2,wxEVT_COMMAND_FILEPICKER_CHANGED,(wxObjectEventFunction)&EvergladesUIFrame::OnagentpickerFileChanged);
    Connect(ID_LISTBOX2,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&EvergladesUIFrame::OnagentgroupListSelect);
    Connect(ID_CHOICE2,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&EvergladesUIFrame::OntargetingTypeChoice2Select);
    //*)

    // Initialize drone image to bitmap
    droneLogo->Rescale(64,64);
    wxBitmap *droneLogo_BMP = new wxBitmap(*droneLogo);
    droneLogo_BMP->SetSize(64, 64);
    droneImg = droneLogo_BMP;

    wxBoxSizer* m_swSizer = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* m_swSizer2 = new wxBoxSizer(wxVERTICAL);

    // Initialize agent unit view
    unitinfo_list->SetSizer(m_swSizer);
    unitinfo_list->EnableScrolling(false, true);
    unitinfo_list->SetScrollbars(0, 10, 0, 5);

    unitinfo_list2->SetSizer(m_swSizer2);
    unitinfo_list2->EnableScrolling(false, true);
    unitinfo_list2->SetScrollbars(0, 10, 0, 5);

    // Disables features on startup
    loadoutpreset_radio1->SetValue(false);
    maptypeRadio1->SetValue(false);
    block();


}

EvergladesUIFrame::~EvergladesUIFrame()
{
    //(*Destroy(EvergladesUIFrame)
    //*)
}

// Gets drone logo bitmap
wxBitmap* EvergladesUIFrame::getLogo(){
    return EvergladesUIFrame::droneLogo_BMP;
}

// On quit event
void EvergladesUIFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void EvergladesUIFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

// Generate GameSetup.json and runs everglades python battle script
void EvergladesUIFrame::OnStartButtonClick(wxCommandEvent& event)
{
    // Generate GameSetup.JSON
    turnLimit = wxAtoi(turnlimitInput->GetValue());
    enableWind = wind_toggle->GetValue();

    // Get map type
    if(maptypeRadio1->GetValue())
        mapType = "3D";
    else if(maptypeRadio2->GetValue())
        mapType = "2D";
    else
        mapType = "";

    // Get loadout preset value
    if(loadoutpreset_radio1->GetValue())
        loadoutpreset = 0;
    else if(loadoutpreset_radio2->GetValue())
        loadoutpreset = 1;
    else if(loadoutpreset_radio3->GetValue())
        loadoutpreset = 2;
    else
        loadoutpreset = -1;

    // Get wind config
    if(enableWind)
        stochasticSeed = stochasticseed_label->GetValue();
    else
        stochasticSeed = "";

    // Target type is handles through an onSelect event

    // Check if all values are configured
    if(!runChecklist())
        return;

    // Gets target type with prefix since that is the format need for the python server
    wxString p1targetchoice = targettypes.at(targetingTypeChoice1->GetSelection());
    wxString p2targetchoice = targettypes.at(targetingTypeChoice2->GetSelection());

    // Creates the GameSetup.json file
    nlohmann::ordered_json gamesetup;
    gamesetup["__type"] = "Setup";
    gamesetup["MapFile"] = "Map.json";
    gamesetup["MapType"] = mapType;
    gamesetup["Targeting"] = {p1targetchoice, p2targetchoice};
    gamesetup["Agents"] = {agent0file, agent1file};
    gamesetup["UnitFile"] = "UnitDefinitions.json";
    gamesetup["UnitBudget"] = 100;
    gamesetup["LoadoutPresetLevel"]= loadoutpreset,
    gamesetup["TurnLimit"] = turnLimit;
    gamesetup["CaptureBonus"] = 1000;
    gamesetup["enableWind"] = enableWind;
    gamesetup["Stochasticity"] = stochasticSeed;
    gamesetup["JammerPenalty"] = 0.75;
    gamesetup["FocusTurnMin"] = 4;
    gamesetup["FocusTurnMax"] = 6;
    gamesetup["FocusHeatMovement"] = 15;
    gamesetup["FocusHeatCombat"] = 25;
    gamesetup["FocusHeatCooloff"] = 10;
    gamesetup["RL_IMAGE_X"] = 600;
    gamesetup["RL_IMAGE_Y"] = 380;
    gamesetup["RL_ORTHO_X"] = 12;
    gamesetup["RL_ORTHO_Y"] = 7;
    gamesetup["RL_Render_P1"] = 1;
    gamesetup["RL_Render_P2"] = 0;
    gamesetup["RL_Render_SaveToDisk"] = 0;
    gamesetup["SubSocketAddr0"] = "opp-agent";
    gamesetup["SubSocketPort0"] = 5556;
    gamesetup["SubSocketAddr1"] = "agent";
    gamesetup["SubSocketPort1"] = 5555;

    // Write json file
    std::ofstream o("config\\GameSetup.json");
    o << std::setw(4) << gamesetup << std::endl;

    // Show genereated json file
    wxMessageBox(gamesetup.dump(4) + "\n Press OK to continue", _("Generated setup"));

    // Run python battle script
    // In the future have the Everglades instance run through the Python C API
    wxString evergladestestpath = wxGetCwd();
    wxString configpath = wxGetCwd().Append("\\config\\Loadout0.json");
    evergladestestpath.Append("\\testbattle.py");
    wxMessageBox(evergladestestpath, _("Running script"));
    wxShell(wxString::Format("cmd /K python.exe \"%s\"", evergladestestpath));
}

// Everglades project directory handler
void EvergladesUIFrame::OnEvergladesDIR_pickerDirChanged(wxFileDirPickerEvent& event)
{
    // Gets the path from the directory selector
    wxString evergladespath = EvergladesDIR_picker->GetPath();

    // Sets the current working directory
    wxSetWorkingDirectory(evergladespath);

    // Check if the selected directory is valid
    if(!checkDir(wxGetCwd())){
        EvergladesDIR_picker->SetPath("");
        wxSetWorkingDirectory(startupDir);
        block();
        wxMessageBox("Invalid Everglades directory", "Error");
    }
    else{
        block();
        parseUnitDefinitions();
        SetTargetingChoices();
    }
}

// Handles wind enable
void EvergladesUIFrame::OnEnableWind(wxCommandEvent& event)
{
    bool enableWind = wind_toggle->IsChecked();
    stochasticseed_label->Enable(enableWind);
}

// Generate list of UnitInfo to show loadout
void updateAgentLoadoutList(wxScrolledWindow* unitlist, int player, int group){
    // Clear the unit list for new objects
    unitlist->GetSizer()->Clear(true);
    std::vector<std::vector<std::string>> loadout;

    // Sets loadout depending on player value 0 or 1
    if(player == 0)
        loadout = agent1loadout;
    else
        loadout = agent2loadout;

    // Adds units into list and grabs unit values from unit definitions
    for(int i = 0; i < loadout[group].size(); i++){
        std::string unitname = loadout[group][i];
        unitname[0] = toupper(unitname[0]);
        Unit temp = unitdefs.at(unitname);
        unitlist->GetSizer()->Add(new UnitInfo(unitlist, unitname, temp.health, temp.damage, droneImg), 1, wxLEFT|wxRIGHT|wxEXPAND, 5, NULL);
    }

    // Sizing thing
    unitlist->GetSizer()->FitInside(unitlist);
}

// Generate squad list
void setSquadList(wxListBox* squadlist, int player){
    std::vector<std::vector<std::string>> loadout;

    // Sets loadout depending on player value 0 or 1
    if(player == 0)
        loadout = agent1loadout;
    else
        loadout = agent2loadout;

    // Populate squad list
    for (int i = 0; i < loadout.size(); i++)
    {
        squadlist->Insert(("Group " + std::to_string(i + 1)), i);
    }
}

// Event handler for viewing composition of each group
void EvergladesUIFrame::OnagentgroupListSelect(wxCommandEvent& event)
{
    int index = event.GetSelection();
    int sourceid = event.GetId();

    if(sourceid == agent1groupList->GetId())
        updateAgentLoadoutList(unitinfo_list, 0, index);

    else if(sourceid == agent2groupList->GetId())
        updateAgentLoadoutList(unitinfo_list2, 1, index);
}

// Json deserialize function to parse the loadout jsons
void parseLoadout(nlohmann::json data, int player){
    std::vector<std::vector<std::string>>* loadout;
    if(player == 0)
        loadout = &agent1loadout;
    else
        loadout = &agent2loadout;

    loadout->clear();
    for(int i = 0; i < data["Squads"].size(); i++){
        std::vector<std::string> row;
        for(int j = 0; j < data["Squads"][i]["Squad"].size(); j++){
            for(int k = 0; k < data["Squads"][i]["Squad"][j]["Count"]; k++){
                row.push_back(data["Squads"][i]["Squad"][j]["Type"]);
            }
        }
        loadout->push_back(row);
   }
}

// Json deserialize function to parse the unit definitions jsons
void parseUnitDefinitions(){
    unitdefs.clear();
    nlohmann::json data;
    std::string path = "config\\UnitDefinitions.json";
    std::ifstream i(path);
    i >> data;

    for(int i = 0; i < data["units"].size(); i++){
        Unit newunit = {data["units"][i]["Health"], data["units"][i]["Damage"]};
        unitdefs.insert(std::pair<std::string, Unit>(data["units"][i]["Name"], newunit));
    }

    for (auto const& x : unitdefs)
    {
        std::cout << x.first  // string (key)
                  << ':'
                  << x.second.health // string's value
                  << std::endl;
    }
}

// Checklist for running python server
bool runChecklist(){
    bool validDir = checkDir(wxGetCwd());
    bool validPy = checkPython();
    // Check if directory is valid
    if(!validDir){
        std::cout << "Invalid Everglades Directory" << std::endl;
        wxMessageBox("Invalid Everglades Directory", _("Error"));
    }
    // Check if python is configured correctly
    // For future use Python C API to check
    else if(!validPy){
        std::cout << "Invalid Python Configuration" << std::endl;
        wxMessageBox("Invalid Python Configuration", _("Error"));
    }
    // Check if player 1 agent script has been selected
    else if(agent0file == ""){
        std::cout << "Agent 1 file not specified" << std::endl;
        wxMessageBox("Agent 1 file not specified", _("Error"));
    }
    // Check if player 2 agent script has been selected
    else if(agent1file == ""){
        std::cout << "Agent 2 file not specified" << std::endl;
        wxMessageBox("Agent 2 file not specified", _("Error"));
    }
    // Check if loadout preset has been selected
    else if(loadoutpreset == -1){
        std::cout << "Loadout Preset not specified" << std::endl;
        wxMessageBox("Loadout Preset not specified", _("Error"));
    }
    // Check if map type has been selected
    else if(mapType == ""){
        std::cout << "Map type not specified" << std::endl;
        wxMessageBox("Map type not specified", _("Error"));
    }
    // Check if there is a stochastic seed if wind is enabled
    else if(enableWind && stochasticSeed == ""){
        std::cout << "Stochastic seed not specified" << std::endl;
        wxMessageBox("Stochastic seed not specified", _("Error"));
    }
    // Check if turn limit has been specified
    else if(turnLimit == 0){
        std::cout << "Turn limit not specified" << std::endl;
        wxMessageBox("Turn limit not specified", _("Error"));
    }
    // Check if targeting type has been selected for player 1
    else if(player1targettypeindex == -1){
        std::cout << "Player 1 targeting type not specified" << std::endl;
        wxMessageBox("Player 1 targeting type not specified", _("Error"));
    }
    // Check if targeting type has been selected for player 2
    else if(player2targettypeindex == -1){
        std::cout << "Player 2 targeting type not specified" << std::endl;
        wxMessageBox("Player 2 targeting type not specified", _("Error"));
    }
    else
        return true;

    return false;
}

// Check for valid everglades directory
bool checkDir(wxString path){
    wxDir dir(path);

    if(!dir.Open("everglades-server\\everglades_server"))
        return false;

    // Manifest of core python files for Everglades
    const std::string fileList[] = {"server.py", "wind.py", "generate_map.py", "generate_3dmap.py"};

    // Check if current working directory has the manifest
    for(std::string fileName : fileList)
        if(!dir.HasFiles(fileName))
            return false;

    dir.Close();
    return true;
}

// Check for valid agent script
// Simply checks if the agent script is located with /agents/
bool checkAgentScript(wxString path, wxString *filename){
    wxFileName agentfile(path);
    wxString dirname = agentfile.GetPath().AfterLast(wxFILE_SEP_PATH);
    std::cout << dirname << std::endl;
    if(dirname != "agents")
        return false;

    *filename = agentfile.GetFullName();
    return true;
}

// Check if python is configured correctly
// For future use Python C API to check python modules and imports
bool checkPython(){
    return true;
}

// Disables features
void EvergladesUIFrame::block(){
    // Check if current working directory is valid
    bool block = checkDir(wxGetCwd());

    //Middle config
    start_button->Enable(block);
    map_label->Enable(block);
    maptypeRadio1->Enable(block);
    maptypeRadio2->Enable(block);
    turnlimitLabel->Enable(block);
    turnlimitInput->Enable(block);
    wind_toggle->Enable(block);
    stochastic_label->Enable(block);
    LoadoutToolsButton->Enable(block);
    loadoutpreset_label->Enable(block);
    loadoutpreset_radio1->Enable(block);
    loadoutpreset_radio2->Enable(block);
    loadoutpreset_radio3->Enable(block);
    targetingTypeChoice1->Enable(block);
    targetingTypeLabel1->Enable(block);
    targetingTypeChoice2->Enable(block);
    targetingTypeLabel2->Enable(block);

    // Agent 1
    playerOneLabel->Enable(block);
    agentscriptlabel1->Enable(block);
    agent1picker->Enable(block);
    agent1groupList->Enable(block);
    unitinfo_list->Enable(block);

    // Agent 2
    playerTwoLabel->Enable(block);
    agentscriptlabel2->Enable(block);
    agent2picker->Enable(block);
    agent2groupList->Enable(block);
    unitinfo_list2->Enable(block);
}

// Agent script handler
void EvergladesUIFrame::OnagentpickerFileChanged(wxFileDirPickerEvent& event)
{
    wxString path = event.GetPath();
    wxString filename;
    // Checks if current working directory is valid
    if(!checkDir(wxGetCwd())){
        event.SetPath("");
        wxMessageBox("Please specify the Everglades project directory", _("Error"));
    }
    // Check if agent script is valid
    else if(!checkAgentScript(path, &filename)){
        event.SetPath("");
        wxMessageBox("Invalid agent script selected", _("Error"));
    }
    // Continue if good
    // Populates the squad and unit lists
    else{
            wxObject *curpicker = event.GetEventObject();
            nlohmann::json j;
            wxListBox *grouplist;
            int sourceid = event.GetId();
            int player;
            std::string path;
            if(sourceid == agent1picker->GetId()){
                agent0file = filename;
                path = "config\\Loadout0.json";
                grouplist = agent1groupList;
                unitinfo_list->GetSizer()->Clear(true);
                unitinfo_list->GetSizer()->FitInside(unitinfo_list);
                player = 0;

            }
            else if(sourceid == agent2picker->GetId()) {
                agent1file = filename;
                path = "config\\Loadout1.json";
                grouplist = agent2groupList;
                unitinfo_list2->GetSizer()->Clear(true);
                unitinfo_list2->GetSizer()->FitInside(unitinfo_list2);
                player = 1;
            }
            std::ifstream i(path);
            i >> j;
            parseLoadout(j, player);
            grouplist->Clear();
            setSquadList(grouplist, player);
    }
}

// Handler for loadout tools button
void EvergladesUIFrame::OnLoadoutToolsButtonClick(wxCommandEvent& event)
{
    LoadoutUiViewer loadoutdialog(this);
    wxArrayString UIFiles;
    wxArrayString UIToolPaths;

    // Gets all files within /ui/
    if(wxDir::GetAllFiles("ui", &UIToolPaths) == 0){
        wxMessageBox("No Files Found", "Loadout Tool Error");
        return;
    }

    // Parses the UI files name to clean names
    // EX: squad_creator_ui -> Squad Creator UI
    for(int i = 0; i < UIToolPaths.size(); i++){
        UIFiles.Add(pathToFileName(UIToolPaths.Item(i)));
        std::cout << UIFiles.Item(i) << std::endl;
    }

    // Populates dialog
    loadoutdialog.setTools(&UIToolPaths);
    loadoutdialog.addItems(&UIFiles);
    // Shows dialog
    loadoutdialog.ShowModal();
    return;
}

// Parses the UI files name to clean names
// EX: squad_creator_ui -> Squad Creator UI
wxString pathToFileName(wxString path){
    wxString temp = path.AfterLast('\\');
    temp = temp.BeforeLast('.');
    temp.Replace("_", " ");
    temp = temp.Capitalize();

    for(int i = 0; i < temp.size() - 3; i++){
        wxChar c = temp.GetChar(i);
        if(c == ' '){
            wxUniCharRef nextchar = temp.GetWritableChar(i + 1);
            nextchar = wxToupper(nextchar);
        }
    }

    temp.Replace("ui", "UI");
    return temp;
}

// Thank you stackoverlow
// Imports /everglades-server/everglades_server/targeting.py and grabs all targeting functions
std::vector<std::string> getPyFunctionFromFile(char *filename){
    std::vector<std::string> targetlist;

    if(filename == NULL)
        return targetlist;

    // initialize Python interpreter
    Py_Initialize();
    // run script
    const char *const script =
        "# tweak sys path to make Python module of cwd locatable\n"
        "import sys\n"
        "sys.path.insert(0, \"everglades-server\\everglades_server\")\n";
    PyRun_SimpleString(script);

    // get module testModule
    PyObject *pModuleTest = PyImport_ImportModule(filename); // new reference
    if(pModuleTest == NULL){
        PyErr_Print();
        return targetlist;
    }

    // evaluate dictionary of testModule
    PyObject *const pDict = PyModule_GetDict(pModuleTest); // borrowed
    if(pDict == NULL){
        PyErr_Print();
        return targetlist;
    }
    // find functions
    std::cout << "Functions of testModule:\n";
    PyObject *pKey = nullptr, *pValue = nullptr;
    for (Py_ssize_t i = 0; PyDict_Next(pDict, &i, &pKey, &pValue);) {
        const char *key = PyUnicode_AsUTF8(pKey);
            if (PyFunction_Check(pValue)) {
                targetlist.push_back(key);
            }
    }
    Py_DECREF(pModuleTest);
    // finalize Python interpreter
    Py_Finalize();

    // Parse functions to get actual targeting functions instead of helper functions
    // Actual targeting functions have the prefix "target_"
    std::cout << "Printing list" << std::endl;
    for(auto cur = targetlist.begin(); cur != targetlist.end(); cur++){
        for(int i = 0; i < prefix.length(); i++){
            std::string temp = *cur;
            if(temp[i] != prefix[i]){
                targetlist.erase(cur--);
                break;
            }
        }
    }

    /*
    for(auto cur = targetlist.begin(); cur != targetlist.end(); cur++){
        std::cout << *cur << std::endl;
    }
    */

    return targetlist;
}

// Populates wxCombo with targeting types
void EvergladesUIFrame::SetTargetingChoices(){

    // "targeting.py" should be in /everglades-server/everglades_server
    std::vector<std::string> targetfunctions = getPyFunctionFromFile("targeting");

    // Popluates wxCombo for both players
    for(auto cur = targetfunctions.begin(); cur != targetfunctions.end(); cur++){
        std::string temp = cur->substr(prefix.length(), cur->npos);
        targettypes.push_back(*cur);
        targetingTypeChoice1->Append(temp);
        targetingTypeChoice2->Append(temp);
    }

    /*
    for(auto cur = targettypes.begin(); cur != targettypes.end(); cur++){
        std::cout << *cur << std::endl;
    }
    */
}

// Handler for selecting target type
void EvergladesUIFrame::OntargetingTypeChoice1Select(wxCommandEvent& event)
{
    player1targettypeindex = targetingTypeChoice1->GetSelection();
}

// Handler for selecting target type
void EvergladesUIFrame::OntargetingTypeChoice2Select(wxCommandEvent& event)
{
    player2targettypeindex = targetingTypeChoice2->GetSelection();
}
