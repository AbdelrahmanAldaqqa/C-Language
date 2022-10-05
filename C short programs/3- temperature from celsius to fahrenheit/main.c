/*
     Author       :Abedalrahman Aldaqa
     Date written :12/11/2019
     Description  :Checking Worksheet#1 Q.3 Output
     (expected    :Temperature in Fahrenheit is  41.00)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float c=5;

    printf("Temperature in Fahrenheit is %.2f", ((float)9/5)*c + 32); // OR // ((float)9/5)*c + 32) // OR // (9/(float)5)*c + 32) // OR // ((float)9/(float)5)*c + 32)
    return 0;
}

