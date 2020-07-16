/*
 * File:   mcu1.c
 * Author: ysfet
 *
 * Created on 02 Mart 2020 Pazartesi, 01:44
 */

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
void main() {
    TRISB=0x00;
    PORTB=0x00;
    while(1){
        PORTB=0b00000001;
        __delay_ms(1000);
        PORTB=0b00000000;
        __delay_ms(1000);
    }
            
}
