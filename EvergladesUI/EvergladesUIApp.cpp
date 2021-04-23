/***************************************************************
 * Name:      EvergladesUIApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-11-26
 * Copyright:  ()
 * License:
 **************************************************************/

#include "EvergladesUIApp.h"
#define wxDELETE(p)      if ( (p) != NULL ) { delete p; p = NULL; }
//(*AppHeaders
#include "EvergladesUIMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(EvergladesUIApp);

bool EvergladesUIApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	EvergladesUIFrame* Frame = new EvergladesUIFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
