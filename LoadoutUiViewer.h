#ifndef LOADOUTUIVIEWER_H
#define LOADOUTUIVIEWER_H
#include <iostream>
//(*Headers(LoadoutUiViewer)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/listbox.h>
#include <wx/sizer.h>
//*)

class LoadoutUiViewer: public wxDialog
{
	public:

		LoadoutUiViewer(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~LoadoutUiViewer();
		void addItems(wxArrayString* items);
		void setTools(wxArrayString* items);
		wxWindow* mainwindow;
        wxArrayString tools;
		//(*Declarations(LoadoutUiViewer)
		wxButton* RunLoadoutButton;
		wxListBox* LoadoutUIListBox;
		//*)

	protected:

		//(*Identifiers(LoadoutUiViewer)
		static const long ID_LISTBOX1;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(LoadoutUiViewer)
		void OnRunLoadoutButtonClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
