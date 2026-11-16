#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
    int sum=0;
    unsigned int i;
    for (i=1; i<=number; i++){
        sum+=i*i;
    } return sum;
}
unsigned int square_of_sum(unsigned int number){
    int sum=0;
    unsigned int i;
    for (i=1; i<=number; i++){
        sum += i;
    } 
    sum = sum *sum;
    return sum;
}
unsigned int difference_of_squares(unsigned int number){
    unsigned int x = square_of_sum(number);
    unsigned int y = sum_of_squares(number);

    return x - y;
}