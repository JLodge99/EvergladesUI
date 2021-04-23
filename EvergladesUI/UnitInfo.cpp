#include "UnitInfo.h"
#include <iostream>
//(*InternalHeaders(UnitInfo)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(UnitInfo)
const long UnitInfo::ID_STATICBITMAP1 = wxNewId();
const long UnitInfo::ID_STATICTEXT2 = wxNewId();
const long UnitInfo::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(UnitInfo,wxPanel)
	//(*EventTable(UnitInfo)
	//*)
END_EVENT_TABLE()

UnitInfo::UnitInfo(wxWindow* parent,wxString unitname, int health, int damage, wxBitmap* droneimg, wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	std::cout << "Creating unit" << std::endl;
	//(*Initialize(UnitInfo)
	Create(parent, wxID_ANY, wxDefaultPosition, wxSize(174,51), 0, _T("wxID_ANY"));
	droneImg = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxPoint(0,0), wxSize(64,48), 0, _T("ID_STATICBITMAP1"));
	droneType = new wxStaticText(this, wxID_ANY, _("Controller"), wxPoint(72,0), wxDefaultSize, 0, _T("wxID_ANY"));
	dmgValue = new wxStaticText(this, ID_STATICTEXT2, _("DMG: A LOT"), wxPoint(72,16), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	hpValue = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxPoint(72,32), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	//*)

	// Set drone image
	droneImg->SetBitmap(*droneimg);

	// Set drone type
	unitname[0] = toupper(unitname[0]);
	droneType->SetLabel(unitname);

	// Set drone attributes
	dmgValue->SetLabel(wxString::Format("Dmg: %d", damage));
	hpValue->SetLabel(wxString::Format("Hp: %d", health * 100));
}

UnitInfo::~UnitInfo()
{
	//(*Destroy(UnitInfo)
	//*)
	std::cout << "Deleting unit" << std::endl;
}

// Set unit name
void UnitInfo::setUnitName(wxString name){
    droneType->SetLabel(name);
}
