/***************************************************************
 * Name:      EvergladesUIMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-11-26
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef EVERGLADESUIMAIN_H
#define EVERGLADESUIMAIN_H
#include "json.hpp"
#include "UnitInfo.h"
#include "LoadoutUiViewer.h"
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <wx/valtext.h>
#include <wx/filename.h>
#include <wx/msgdlg.h>
#include <wx/filefn.h>
#include <wx/dir.h>
#include <wx/unichar.h>

//(*Headers(EvergladesUIFrame)
#include "./wximages/EvergladesUIMain_LockheedLogo_XPM.xpm"
#include "./wximages/EvergladesUIMain_droneLogo_XPM.xpm"
#include <wx/bitmap.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/choice.h>
#include <wx/filepicker.h>
#include <wx/frame.h>
#include <wx/image.h>
#include <wx/listbox.h>
#include <wx/panel.h>
#include <wx/radiobut.h>
#include <wx/scrolwin.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

typedef struct Unit
{
    int health;
    int damage;
} Unit;

void updateAgentLoadoutList(wxScrolledWindow* unitlist, int player, int group);
void setSquadList(wxListBox* squadlist, int player);
void parseLoadout(nlohmann::json data, int player);
void parseUnitDefinitions();
bool runChecklist();
bool checkDir(wxString path);
bool checkPython();
wxString pathToFileName(wxString path);
std::vector<std::string> getPyFunctionFromFile(char *filename);
void SetTargetingChoices();

static std::vector<std::vector<std::string>> agent1loadout;
static std::vector<std::vector<std::string>> agent2loadout;
static std::vector<std::string> targettypes;
static std::map<std::string, Unit> unitdefs;
static wxBoxSizer* unitsarr[12];
static wxBitmap* droneImg;

const wxString startupDir = wxGetCwd();
static int turnLimit;
static bool enableWind;
static wxString agent0file;
static wxString agent1file;
static wxString stochasticSeed;
static wxString mapType;
static int loadoutpreset = -1;
static int player1targettypeindex = -1;
static int player2targettypeindex = -1;
static std::string prefix = "target_";

class EvergladesUIFrame: public wxFrame
{
    public:
        EvergladesUIFrame(wxWindow* parent,wxWindowID id = -1);
        wxBitmap* getLogo();
        virtual ~EvergladesUIFrame();
    private:
        void block();
        void SetTargetingChoices();
        //(*Handlers(EvergladesUIFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnRadioButton2Select(wxCommandEvent& event);
        void Onmapgenerate_buttonClick(wxCommandEvent& event);
        void OnStartButtonClick(wxCommandEvent& event);
        void OnEvergladesDIR_pickerDirChanged(wxFileDirPickerEvent& event);
        void TestbattlePicker(wxFileDirPickerEvent& event);
        void OnEnableWind(wxCommandEvent& event);
        void OnagentgroupListSelect(wxCommandEvent& event);
        void OnagentpickerFileChanged(wxFileDirPickerEvent& event);
        void OnPythonButton1Click(wxCommandEvent& event);
        void OnLoadoutToolsButtonClick(wxCommandEvent& event);
        void OntargetingTypeChoice1Select(wxCommandEvent& event);
        void OntargetingTypeChoice2Select(wxCommandEvent& event);
        //*)

        //(*Identifiers(EvergladesUIFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT7;
        static const long ID_FILEPICKERCTRL1;
        static const long ID_LISTBOX1;
        static const long ID_SCROLLEDWINDOW1;
        static const long ID_STATICTEXT8;
        static const long ID_CHOICE1;
        static const long ID_STATICBITMAP1;
        static const long ID_STATICTEXT5;
        static const long ID_STARTBUTTON;
        static const long ID_STATICTEXT6;
        static const long ID_DIRPICKERCTRL1;
        static const long ID_STATICTEXT11;
        static const long ID_RADIOBUTTON6;
        static const long ID_RADIOBUTTON7;
        static const long ID_RADIOBUTTON8;
        static const long ID_STATICTEXT2;
        static const long ID_RADIOBUTTON1;
        static const long ID_RADIOBUTTON2;
        static const long ID_STATICTEXT10;
        static const long ID_TEXTCTRL3;
        static const long ID_CHECKBOX1;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT9;
        static const long ID_FILEPICKERCTRL2;
        static const long ID_LISTBOX2;
        static const long ID_SCROLLEDWINDOW2;
        static const long ID_STATICTEXT12;
        static const long ID_CHOICE2;
        static const long ID_PANEL1;
        //*)

        //(*Declarations(EvergladesUIFrame)
        wxBitmap              *LockheedLogo_BMP;
        wxBitmap              *droneLogo_BMP;
        wxButton* LoadoutToolsButton;
        wxButton* start_button;
        wxCheckBox* wind_toggle;
        wxChoice* targetingTypeChoice1;
        wxChoice* targetingTypeChoice2;
        wxDirPickerCtrl* EvergladesDIR_picker;
        wxFilePickerCtrl* agent1picker;
        wxFilePickerCtrl* agent2picker;
        wxImage               *LockheedLogo;
        wxImage               *droneLogo;
        wxListBox* agent1groupList;
        wxListBox* agent2groupList;
        wxPanel* main_panel;
        wxRadioButton* loadoutpreset_radio1;
        wxRadioButton* loadoutpreset_radio2;
        wxRadioButton* loadoutpreset_radio3;
        wxRadioButton* maptypeRadio1;
        wxRadioButton* maptypeRadio2;
        wxScrolledWindow* unitinfo_list2;
        wxScrolledWindow* unitinfo_list;
        wxStaticBitmap* lockheed_logo;
        wxStaticText* agentscriptlabel1;
        wxStaticText* agentscriptlabel2;
        wxStaticText* browser_label;
        wxStaticText* everglades_title;
        wxStaticText* loadoutpreset_label;
        wxStaticText* map_label;
        wxStaticText* playerOneLabel;
        wxStaticText* playerTwoLabel;
        wxStaticText* stochastic_label;
        wxStaticText* targetingTypeLabel1;
        wxStaticText* targetingTypeLabel2;
        wxStaticText* turnlimitLabel;
        wxTextCtrl* stochasticseed_label;
        wxTextCtrl* turnlimitInput;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // EVERGLADESUIMAIN_H

/*
TODO Sorry for the spaghetti heres my todo list for this applications, "+" is completed
+ Normalize file paths
+ Check if everglades dir is valid
- Rescale drone image
- Import other drone images
+ Import unit definitions
+ Finish drone panel
+ Generate gamesetup.json
+ Copy to agent2 side
- Dialog for waiting for game to finish
+ Import loadouts
+ Access dev tools
HOMERUN
- Specify dimensions for 3D map
- Run Everglades instance with Python C API instead of calling testbattle.py
- Adds charts/summarizers to view telemetry data
 - View map that is generated
 - View wind model
*/
