void main() {
     //Declaracion de los puertos B0, C4, D2, A0 como entrada y salida.
     TRISA=0x00;
     TRISB=0x00;
     TRISC=0x00;
     TRISD=0x00;
     //Arranque de los puertos en estado apagado.
     LATA = 0x00;
     LATB = 0x00;
     LATC = 0x00;
     LATD = 0x00;

     //Ciclo para encender y apagar todos los leds.
     while(1){
            //Leds apagados
            LATA = 0x00;
            LATB = 0x00;
            LATC = 0x00;
            LATD = 0x00;
            Delay_ms(1000); //Retraso de 1 segundo.

            //Leds encendidos
            LATA = 0xFF;
            LATB = 0xFF;
            LATC = 0xFF;
            LATD = 0xFF;
            Delay_ms(1000); //Retraso de 1 segundo.
     }
}