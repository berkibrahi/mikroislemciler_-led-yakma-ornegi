#include <18f452.h>
#fuses  XT,NOWDT,NOPROTECT,PUT
#use delay (clock=4000000)
#use  fast_io(b)
void main(void){
set_tris_b(0x00);
output_b(0x00);
delay_ms(1000);
output_b(0b00000010);
//output_high(pin_B1);


}


