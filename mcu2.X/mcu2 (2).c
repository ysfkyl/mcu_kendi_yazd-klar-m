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
#include <math.h>
//#include <pic16f877a>
#define _XTAL_FREQ 4000000
char port_deger=1;
int i=1;
void main() {
    TRISB=0x00;
    PORTB=0x00;
    while(1){
        while(port_deger<256){
            PORTB=port_deger;
            __delay_ms(150);
            port_deger=port_deger*2;
         
                             }
         while(port_deger>1){
             PORTB=port_deger;
            __delay_ms(150);
            port_deger=port_deger/2;
                             }
            /* bilalin �devi  
              PORTB=port_deger;
            __delay_ms(500);
             port_deger=pow(2,i)-1;
                                  
            i++;
            if(i>8){
                 i=0;
            }*/}}  
