#include <IRremote.h>
int ir_pin=A5;
IRrecv recep(ir_pin);

int code()
{
    if(recep.decode())
    {
        return recep.decodedIRData.command;
    }
    return 0;
}

#define b_0 0x16
#define b_1 0xC
#define b_2 0x18
#define b_3 0x5E
#define b_4 0x8
#define b_5 0x1C
#define b_6 0x5A
#define b_7 0x42
#define b_8 0x52
#define b_9 0x4A
#define b_front 0x40
#define b_back 0x19
#define b_left 0x7
#define b_right 0x9
#define b_play 0x15
#define b_undo 0x43
