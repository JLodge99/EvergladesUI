#ifndef UNITINFO_H
#define UNITINFO_H

//(*Headers(UnitInfo)
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

class UnitInfo: public wxPanel
{
	public:

		UnitInfo(wxWindow* parent,wxString unitname, int health, int damage, wxBitmap* droneimg, wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~UnitInfo();

		//(*Declarations(UnitInfo)
		wxStaticBitmap* droneImg;
		wxStaticText* dmgValue;
		wxStaticText* droneType;
		wxStaticText* hpValue;
		//*)

	protected:

		//(*Identifiers(UnitInfo)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT1;
		//*)

	private:
        void setUnitName(wxString name);
		//(*Handlers(UnitInfo)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
