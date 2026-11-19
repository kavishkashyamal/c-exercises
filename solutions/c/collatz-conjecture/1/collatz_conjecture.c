#include "collatz_conjecture.h"
#include <stdio.h>

int steps(int start){
    int count=0;
    while (start !=1){
        if (start<1){
            return -1;
        } else if (start % 2 == 0){
            //for even 
            start = (start)/2;
        } else {
            start = ((3*start)+1);
        }
        count++;
    } return count;
        
}