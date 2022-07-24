//Programmer: Denny Vamilion
//Date: 23.07.2022
// this script is made for the HC-SR04 Ultrasonic Sensor Module

#include "pico/stdlib.h"

#define LOW 0
#define HIGH 1

int main(){
    stdio_init_all();

    int triggerpin = 2;
    int echopin = 3;
    int messung = 0;
    int ergebnis = 0;

    gpio_init(triggerpin);
    gpio_set_dir(triggerpin, GPIO_OUT);

    gpio_init(echopin);
    gpio_set_dir(echopin, GPIO_IN);

    while (true)
    {
        gpio_put(triggerpin, LOW);
        sleep_ms(2);
        gpio_put(triggerpin, HIGH);
        sleep_ms(10);
        gpio_put(triggerpin, LOW);

        messung = 
        // muss noch zu ende gemacht werden (pulseIn)
    }
    
}
