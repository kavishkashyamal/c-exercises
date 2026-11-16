#include "grains.h"
#include <math.h>

uint64_t square(uint8_t index){
    if (index == 0 || index > 64){
        return 0;
    }
    unsigned int i;
    uint64_t grains=1;
    
    for (i=1; i<=index; i++){
        grains = pow(2, (index-1));
    } return grains;
}
uint64_t total(void){
    unsigned int i;
    uint64_t sum=0;
    uint64_t grains = 1;
    
    for (i=1; i<=64; i++){
        sum += grains;

        if (i<64){
            grains *= 2;
        }
    }
    return sum;
}