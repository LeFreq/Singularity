/* Purpose: starts the core operating system (previous to any user commands)
** Version:  for ANSI C0x01
** Donewhen: user requests
** Exit_status:
"all apps shut down normally"
"all hardware shutdown normally"
"rebooting" 
*/

//This is an experimental, temporary attempt
function Parser(int DEBUG, int clear_screen);  //present user prompt when finished
function HardwareTable();
   
char* array; //"array" is a variable that holds a pointer.

//first function comment
terminate_status kernel() {
//all core hardware ready and ready to respond to user requests
    var=0;
    return b;
};

void main() {
    LoadHardwareData;  //will scan bootable devices
    CreateHardwareTable;  //create hardware table from hardware data
    RunSystemObjects;  //starts desired scheduler and other objects
    RunUserObjects;    //User-defined customizations
    EstablishParser;   //Set-up interface to user
    PresentingToUser;  //hello world
    
    Shutdown;  //shutdown all objects and halt system.
}

