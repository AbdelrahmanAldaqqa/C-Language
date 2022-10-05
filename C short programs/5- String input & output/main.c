#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[100];
    char y[100];

    printf("Please enter two sentences (each less than 100 characters): \n");

    scanf(" %s %s",&x,&y);

    printf("%s %s",x,y);

   

    return 0;
}
