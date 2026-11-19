#include "hamming.h"
#include <stdio.h>
#include <string.h>

int compute(const char *lhs, const char *rhs){
    int count=0;
    int i;
    int lenLhs = strlen(lhs);
    int lenRhs = strlen(rhs);
    if (lenLhs!=lenRhs){
        return -1;
    } else {
        for (i=0; i<lenLhs; i++){
            if (lhs[i]!=rhs[i]){
                count++;
            }
    } return count;
    }
    
}