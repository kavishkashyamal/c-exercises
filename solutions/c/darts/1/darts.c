#include "darts.h"
#include <math.h>
#include <stdint.h>


uint8_t score(coordinate_t landing_position){
    double x = landing_position.x;
    double y = landing_position.y;
    
    double distance = sqrt((x*x + y*y));
    if (distance <= 1){
        return 10;
    } else if (distance <= 5){
        return 5;
    } else if (distance <= 10){
        return 1;
    } else{
        return 0;
    }
}