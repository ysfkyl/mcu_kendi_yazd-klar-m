
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
int birler=0, onlar=0,sayi=0;
void main(void) {

  
    TRISB = 0xF0;
    PORTB = 0;
    TRISC = 0x00;
    PORTC = 0x03;

    while (1) {
        onlar=sayi/10;
        birler=sayi%10;
        
       RC0= 0;
        PORTB = dizi[birler];
         __delay_ms(1);
        RC0=1; 
       
         RC1= 0;
        PORTB = dizi[onlar];
         __delay_ms(1);
        RC1=1; 
        sayi++
        
}
    
    
    
/*


const unsigned char dizi[]={0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
int birler=0, onlar=0, yuzler=0, binler=0, sayi=0;
void main() {
    TRISD=0x00;
    PORTD=0x00;
    TRISA=0x00;
    PORTA=0x00;
    while(1){
    
        binler=sayi/1000;
        yuzler=(sayi-binler*1000)/100;
        onlar=(sayi-binler*1000-yuzler*100)/10;
        birler=sayi%10;
       
        RA0=0;
        PORTD=dizi[birler];
        RA0=1;
        __delay_ms(500);
        
        RA1=0;
        PORTD=dizi[onlar];
        RA1=1;
        __delay_ms(500);
     
         RC2=0;
        PORTD=dizi[yuzler];
        RC2=1;
        __delay_ms(500);
      
        RC3=0;
        PORTD=dizi[binler];
        RC3=1;
        __delay_ms(500);
                
        sayi++;
        
                
    }
        
}*/
