#include <stdio.h>
#include "pico/stdlib.h"

#define VERMELHO 13
#define AMARELO 12
#define VERDE 11

uint32_t mask_leds=(1<<13)|(1<<12)|(1<<11);

int main()
{
    stdio_init_all();
    gpio_init_mask(0b11100000000000);
    gpio_set_dir_out_masked(mask_leds);
    

    while (true) {
        gpio_put_all(1<<VERDE);
        sleep_ms(5000);
        gpio_put_all(1<<AMARELO);
        sleep_ms(2000);
        gpio_put_all(1<<VERMELHO);
        sleep_ms(5000);
    }
}


