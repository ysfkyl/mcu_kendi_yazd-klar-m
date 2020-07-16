

#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF  
#include <xc.h>
//#include <pic16f877a>
#define _XTAL_FREQ 4000000
const unsigned char dizi[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07, 0x7F, 0x6F };
int i=0; // i=9; a?ag? sayd?rma
int onlar=0;
void main() {
    TRISB=0x00;
    PORTB=0x00;
    TRISA=0b00000000;
    PORTA=0x00;
     
    while(1){
        
         
            
          i++;
            RA0=0;
            PORTB=dizi[i];
            RA0=1;
            __delay_ms(10);
            
            RA1=0;
            PORTB=dizi[onlar];
            RA1=2;
            __delay_ms(10);
            
             if(i>9){
            i=0;
            onlar+=1;
                  }
        
    
    }    
}