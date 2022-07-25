//Programmer: Denny Vamilion
//Date: 23.07.2022
// this script is made for the HC-SR04 Ultrasonic Sensor Module
#include "pico/stdlib.h"
#include <stdio.h>

#define LOW 0
#define HIGH 1

int main(void){
    stdio_init_all();

    int triggerpin = 2;
    int echopin = 3;
    int echovalue;
    float signaloff = 0;
    float signalon = 0;

    gpio_init(triggerpin);
    gpio_set_dir(triggerpin, GPIO_OUT);

    gpio_init(echopin);
    gpio_set_dir(echopin, GPIO_IN);

    echovalue = gpio_get_dir(echopin);

    while (true)
    {
        gpio_put(triggerpin, LOW);
        sleep_ms(2);
        gpio_put(triggerpin, HIGH);
        sleep_ms(10);
        gpio_put(triggerpin, LOW);

        printf("Test 2");

        while (echovalue == 0)
        {
            signaloff = time_us_64();
        }

        while (echovalue == 1)
        {
            signalon = time_us_64();
        }
        
        float timepassed = signalon - signaloff;

        printf("%f", timepassed, "cm");
        
    }
    
}
