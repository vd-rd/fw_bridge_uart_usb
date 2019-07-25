#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

int main() {
    rcc_clock_setup_in_hsi_out_48mhz();

    while (true) {
        
    }

    return 0;
}