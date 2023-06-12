/* kernel.c
** Purpose: starts the core operating system (previous to any user commands)
** Version:  for ANSI C0x01
** DoneWhen: user requests via shutdown signal
** Exit_status:
[NOTHING] // meaning:
//"all apps shut down normally"
//"all hardware shutdown normally" OR
REBOOTING...
*/

//bring in generic hardware configurations in case user doesn't supply one.
#include boot.h 

//This is an experimental, temporary attempt
function Parser(int DEBUG, int clear_screen);  //present user prompt when finished
function HardwareTable();

bool LoadHardwareData() {
      if (bootable)//check boot device for hardware file.
      else 
         return NULL;
}

void main() {
    LoadHardwareData;  //will scan bootable devices
    CreateHardwareTable;  //create hardware table from hardware data
    RunSystemObjects;  //starts desired scheduler and other objects
    RunUserObjects;    //User-defined customizations
    LoadParser;   //Set-up interface to user
    PresentCLIToUser;  //hello world
    /* yadda yadda */
    Shutdown;  //shutdown all objects and halt system.
}

