/* List of hardware configurations for interrupt table data
Contains typedefs of different hardware systems and 
their memory addresses.  In case BIOS routines are unavailable.
*/

//This special non-software file deliniates where the hardware services are expected to end and the software or OS to begin.

//typedefs of generic hardware motherboards in case user doesn't have one.

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
//function headers
MOUNSE_STATE laser(), function3(int x,y), getstate(FILE_HANDLE mdevice); 
void laser*; //pointer to function laser
*char arrayfunction(TLIST)


BOOT
#Purpose:  to poweron hardware and inform OS of system status and hardware
#Needs:  valid power supply
#Publishes: a dedicated memory array (address #0000????) with the system data:
*storage: memsize, storage arry size, # of storage devices, r/wability, bootdisk memory location (cluster-sized chunks)
*processing:
*networking:  networkcard memory location (protocol/datagram sizd)
*user i/o: 
#Donewhen:  hardware RDY, dedicated memory filled, first kernel instruction loaded.


