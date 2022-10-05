/*
     Author       :Abedalrahman Aldaqa
     Date written :12/11/2019
     Description  :Let the user enter 2# and show + - * / of them
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2;

    printf(" Input the first number  : ");
    scanf("%f",&num1);

    printf(" Input the second number : ");
    scanf("%f",&num2);

    printf(" Sum          : %f + %f = ",num1,num2);
    printf("%f",num1 + num2);

    printf("\n Product      : %f * %f = ",num1,num2);
    printf("%f",num1 * num2);

    printf("\n Subtraction1 : %f - %f = ",num1,num2);
    printf("%f",num1 - num2);

    printf("\n Subtraction2 : %f - %f = ",num2,num1);
    printf("%f",num2 - num1);

    printf("\n Devision1    : %f / %f = ",num2,num1);
    printf( "%f",num2 / ( float ) num1 );

    printf("\n Devision2    : %f / %f = ",num1,num2);
    printf( "%f",num1 / ( float ) num2 );

    return 0;
}
