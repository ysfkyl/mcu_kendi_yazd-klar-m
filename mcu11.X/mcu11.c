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
int sayac;
void __interrupt() KESME(void){
    if(T0IF) {
        sayac++;
        if(sayac==10){
            sayac=0;
            RB0=RB0^1;
        }
        TMR0=61;
        T0IF=0;
    }
    }
   void main() {
    GIE=1;
    T0IE=1;
    OPTION_REG=0x07;
    TMR0=61;
    sayac=0;
    TRISB = 0x00;
    PORTA=0;
    while (1) {}
   }