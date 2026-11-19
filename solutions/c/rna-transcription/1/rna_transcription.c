#include "rna_transcription.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna){
    int len = strlen(dna);
    char *result = malloc(len+1);
    int i = 0;
    
    while (i != len){
       if (dna[i] == 'A'){
            result[i]='U';
        } else if (dna[i] == 'C'){
            result[i]='G';
        } else if (dna[i] == 'G'){
            result[i]='C';
        } else if (dna[i]=='\0'){
           result[i]='\0';
       } else{
            result[i]='A';
        } 
        i++;
         
}  result[len]='\0'; 
    return result; 
}