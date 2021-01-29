#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 


int GetLength(signed long long);


//most MasterCard numbers start with 51, 52, 53, 54, or 55  MasterCard uses 16-digit numbers,
//; and all Visa numbers start with 4.  and Visa uses 13- and 16-digit numbers. 


int main(void){

    long long i = 1000000000123123;
    GetLength(i);

   
}



int GetLength(signed long long Input){
    int LengthLong = floor(log10(abs(Input))) + 1;
    printf("Length is: %i\n", LengthLong);
    return LengthLong;
}
