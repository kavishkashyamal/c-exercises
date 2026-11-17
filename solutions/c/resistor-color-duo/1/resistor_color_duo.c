#include "resistor_color_duo.h"
#include <stdint.h>

uint16_t color_code(resistor_band_t *colors){
    int results;
    int i=0;
    results = 10*colors[i] + colors[i+1];
    return results;
}