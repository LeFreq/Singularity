This special non-software file deliniates where the hardware services are expected to end and the software or OS to begin.

BOOT
#Purpose:  to poweron hardware and inform OS of system status and hardware
#Needs:  valid power supply
#Publishes: a dedicated memory array (address #0000????) with the system data:
*storage: memsize, storage arry size, # of storage devices, r/wability, bootdisk memory location (cluster-sized chunks)
*processing:
*networking:  networkcard memory location (protocol/datagram sizd)
*user i/o: 
#Donewhen:  hardware RDY, dedicated memory filled, first kernel instruction loaded.


