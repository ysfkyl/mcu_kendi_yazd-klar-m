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
const unsigned char dizi[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07, 0x7F, 0x6F };
int i=0; // i=9; a?ag? sayd?rma
void main() {
    TRISB=0x00;
    PORTB=0x00;
    while(1){
        PORTB=dizi[i];
        __delay_ms(1000);
        i++;
        //i--; a?ag? sayd?rma
        if(i>9){
            i=0;
        }
        /* if(i<0){    // a?ag? sayd?rma
            i=9;
        }*/
    }
        
}