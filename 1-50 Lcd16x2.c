#include <mega32.h>
#include <stdio.h>
#include <alcd.h>
#include <delay.h>
int L=0;
char str[20];
 
void main(void)
{
DDRA=(0<<DDA7) | (0<<DDA6) | (0<<DDA5) | (0<<DDA4) | (0<<DDA3) | (0<<DDA2) | (0<<DDA1) | (0<<DDA0);
PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (0<<PORTA2) | (0<<PORTA1) | (0<<PORTA0);
 
lcd_init(16);
 
while (1)
      {
      for(L=0;L<=50;L++){
       lcd_gotoxy(0,0);
       sprintf(str,"L = %d",L);
       lcd_puts(str); 
       delay_ms(100);
              }
      lcd_clear();
      }
}