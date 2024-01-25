/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int a = 19;
    float b = 29.01;
    char c = 'L';
    char *d = "CEFET-MG";
    char e[11] = {'C', 'E', 'F', 'E', 'T', '-', 'M', 'G'};
    
    printf("Isto e um valor do tipo int (numeros inteiros) = %d \n", a);
    printf("Isto e um valor do tipo float (numeros quebrados) = %f \n", b);
    printf("Isto e um valor do tipo char (um caracter) = %c \n", c);
    printf("Isto e um valor do tipo char* (um literal) = %s \n", d);
    printf("Isto e um valor do tipo char[ ] (um vetor/matriz) = %s \n", e);
    
    system("PAUSE");
}
