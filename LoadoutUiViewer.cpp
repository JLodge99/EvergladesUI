#include "LoadoutUiViewer.h"
#include "EvergladesUIMain.h"
#include "Python.h"
#include <fstream>
#include <wx/filename.h>
//(*InternalHeaders(LoadoutUiViewer)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(LoadoutUiViewer)
const long LoadoutUiViewer::ID_LISTBOX1 = wxNewId();
const long LoadoutUiViewer::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(LoadoutUiViewer,wxDialog)
	//(*EventTable(LoadoutUiViewer)
	//*)
END_EVENT_TABLE()

LoadoutUiViewer::LoadoutUiViewer(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(LoadoutUiViewer)
	wxBoxSizer* BoxSizer1;

	Create(parent, wxID_ANY, _("Loadout UI"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(243,103));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	LoadoutUIListBox = new wxListBox(this, ID_LISTBOX1, wxDefaultPosition, wxSize(157,140), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
	BoxSizer1->Add(LoadoutUIListBox, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	RunLoadoutButton = new wxButton(this, ID_BUTTON1, _("Run"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer1->Add(RunLoadoutButton, 0, wxALL|wxALIGN_TOP, 5);
	SetSizer(BoxSizer1);
	SetSizer(BoxSizer1);
	Layout();
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&LoadoutUiViewer::OnRunLoadoutButtonClick);
	//*)
	mainwindow = parent;
}

LoadoutUiViewer::~LoadoutUiViewer()
{
	//(*Destroy(LoadoutUiViewer)
	//*)
}

// Adds items to loadout dialog
void LoadoutUiViewer::addItems(wxArrayString* items){
    LoadoutUIListBox->InsertItems(*items, 0);
    return;
}

// Runs designated ui script with Python C API
void LoadoutUiViewer::OnRunLoadoutButtonClick(wxCommandEvent& event)
{
    // Get UI loadout file
    int index = LoadoutUIListBox->GetSelection();
    wxFileName toolpath(tools.Item(index));

    nlohmann::json j;
    nlohmann::json l;
    std::ifstream toolfile(toolpath.GetFullPath().mb_str());
    std::string filetostr((std::istreambuf_iterator<char>(toolfile)), std::istreambuf_iterator<char>());

    // Runs the UI python file and locks dialog until finished
    Py_Initialize();
    this->Disable();
    PyRun_SimpleString(filetostr.c_str());
    this->Enable();
    this->Raise();
    Py_Finalize();

    // Reloads static loadout variables
    std::ifstream i("config\\Loadout0.json");
    i >> j;
    std::ifstream k("config\\Loadout1.json");
    k >> l;

    parseLoadout(j, 0);
    parseLoadout(l, 1);

    // Reloads static unit definitions variable
    parseUnitDefinitions();
    std::cout << "Loadout and Unit Definitions updated" << std::endl;
    return;
}

// Sets items
void LoadoutUiViewer::setTools(wxArrayString* items){
    tools = *items;

    return;
}
