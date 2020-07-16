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
int i,j,k;
int satir[2][5]={0x03, 0x3A, 0x3B, 0x3A, 0x03,
                 0x40, 0x5E, 0x1E, 0x5E, 0x5E};

void main() {

    TRISB = 0x00;
    TRISC = 0x00;
    
    while (1) {
        for(k=0;k<2;k++){
            for(j=0;j<100;j++){
                PORTC=1;
                for(i=0;i<5;i++){
                PORTB = satir[k][i];
                __delay_ms(10);
                PORTC=PORTC<<1;
                }
            }    
        } 
    }
}