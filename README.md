# EvergladesUI

EvergladesUI is a wxWidgets desktop application whose purpose is to interface with the Everglades AI Wargame Python Server

* EvergladesMSVC - Visual Studio 2019 Project
* EvergladesUI - Codeblocks Project

## Requirements
* [wxWidgets 3.1.4](https://wxwidgets.org/)
    * [Direct Download](https://github.com/wxWidgets/wxWidgets/releases/download/v3.1.4/wxWidgets-3.1.4.zip)

* [Code::Blocks 20.03](https://www.codeblocks.org/) (mingw-setup)

* MinGW 8.1.0

## Compile wxWidgets Libraries (MinGW)

Download [wxWidgets 3.1.4](https://wxwidgets.org/downloads/) source code


Move `run.bat` into the directory `\build\msw` within the downloaded source code

Run the batch file (depending on your processor you can edit `run.bat` and either remove the -j flag or change the number for parallel computing)

The two libraries that are compiled are located in `\lib`
* \gcc_lib_static_debug\
* \gcc_lib_static_release\

## Code::Blocks Settings

### Global Variables

Settings > Global variables > New > Create a variable `wxwin`

Set **base** to the path of the wxWidgets source code

Set **include** to `$(#wxwin)\include`

Set **lib** to `$(#wxwin)\lib`

![Global Variables wxwin](cbp_global_var_wxwin.png)

Settings > Global variables > New > Create a variable `python`

Set **base** to the path of python3

Set **include** to `$(#python)\include`

Set **lib** to `$(#python)\libs`

![Global Variables python](cbp_global_var_python.png)

## Compile wxWidgets Libraries (MSVC)
*NOTE: If you continue development through Visual Studio you will be unable to add any UI components since wxSmith is a codeblocks exclusive plugin*

Make sure you have the Desktop development with C++ package installed

Within the wxWidgets source code directory locate the file `build\msw\wx_vc16.sln`
1. Open `build\msw\wx_vc16.sln`
2. Build > Batch Build...
3. Select All
4. Build

This will compile all the libraries for MSVC and will take a few minutes.

## Visual Studio 2019 Settings

Open `Everglades.sln`

The only thing you will have to configure are the User Macro environment variables for Python and wxWidgets

Go to the Property Manager of the UI project and open one of the folder. Open UserMacros and go to *Common Properties > User Macros* and update the paths of `WXWIN` and `PYTHON`

An alternative is to open `UserMacros.props` with a text editor and directly change the paths.

## Third-Party Tools
* [nlohmann json](https://github.com/nlohmann/json) to parse jsons
