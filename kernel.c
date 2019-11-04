/*Purpose: starts the core operating system (previous to any user commands)
Version:  for ANSI C0x01
Donewhen: user requests
Exit_status:
"all apps shut down normally"
"all hardware shutdown normally"
"rebooting" */

//This is an experimental, temporary attempt
function Parser(int DEBUG, int clear_screen);  //present user prompt when finished
function HardwareTable();
/* MOVE THIS
//memory mapped i/o addresses and definitions
//###python FIXMEs
//## python WARNs
//# python comments
*/

//List of generic hardware motherboards

IBMPCv1_motherboard* HardwareTable(){

}
typedef 
struct {
    //!!These are all guesses, not to be used in production!!
    0x0000 flash_BIOS_memory;
    0x1000 RAM
    0x02df COM1;
    0x03df COM2;
    0x0800 video_RAM;
    0x0100-0x1FF harddrive_memory_mapped_io;
} IBMPCv1_motherboard;

struct {
} IBMPS_2v2_motherboard_addresses;

typedef
    
    0x0100 mouse; \\2-byte words
   
*char array; //"array" is a variable that holds a pointer.

//function headers
MOUNSE_STATE laser(), function3(int x,y), getstate(FILE_HANDLE mdevice); 
void laser*; //pointer to function laser
*char arrayfunction(TLIST)

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

