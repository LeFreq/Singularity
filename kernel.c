/*Purpose: starts the core operating system (previous to any user commands)
Version:  for ANSI C0x01
Donewhen: user requests
Exit_status:
"all apps shut down normally"
"all hardware shutdown normally"
"rebooting" */

//This is an experimental, temporary attempt

//memory mapped i/o addresses and definitions
//###python FIXMEs
//## python WARNs
//# python comments
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


//function definition
int function1() {
    function2();
}
        
int function2() {
    function1();
}

/*comment for the following function*/
int function2(int x,y; char ch) {
    this=that
};

void main() {
    int posx, posy;
    
    function2(posx, posy);
    
}

