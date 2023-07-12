/*
AUTOR: MICROSIDE TECHNOLOGY S.A. DE C.V.
FECHA: JUNIO 2019
*/

/*
---------------------------------------------------------------------------
Esta pr�ctica consiste en imprimir un mensaje, a trav�s de una
pantalla LCD
---------------------------------------------------------------------------
*/

#include <16F877A.h>                            //Incluye el microcontrolador con el que se va a trabajar 
#use delay(clock=20Mhz, crystal)                //Tipo de oscilador y frecuencia dependiendo del microcontrolador 


/*
------------------------------------------------------------------------------
CONFIGURACION DE PINES LCD
------------------------------------------------------------------------------
*/

#define LCD_RS PIN_B0                           //CONTROL del LCD
#define LCD_RW PIN_B1
#define LCD_E PIN_B2
#define LCD_DB4 PIN_B3                          //DATOS del LCD (4 lineas)
#define LCD_DB5 PIN_B4
#define LCD_DB6 PIN_B5
#define LCD_DB7 PIN_B6

#include "flex_lcd.h"                           //LIBRERIA LCD

 

void main()

{
       lcd_init ();                             // Inicializaci�n del lcd.
       delay_ms (50) ;

        while(1)

           {

                printf (lcd_putc, "   MICROSIDE");    //Entre comillas escribimos el mensaje a mostrar
                delay_ms (2000);
               
                lcd_gotoxy (1, 2);                    //Segundo rengl�n
                printf (lcd_putc, "   TECHNOLOGY");   //Entre comillas escribimos el mensaje a mostrar
                delay_ms (2000);

                lcd_gotoxy (1, 1);                    //regresa cursor al inicio
                lcd_init ();                          //limpia display
                delay_ms (1000);

                printf (lcd_putc, "  BIENVENIDOS");   //Entre comillas escribimos el mensaje a mostrar
                delay_ms (2000);

                lcd_init ();                          //limpia display
                delay_ms (2000);
          }

}
