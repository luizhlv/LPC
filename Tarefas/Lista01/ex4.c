/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    float a, b;
    printf("Digite 2 numeros");
    scanf("%f %f", &a, &b); /*se A e B são float */
    
    printf("\nSoma dos valores = %.2f ", a+b);
    printf("\nSubtracao dos valores = %.2f", a-b);
    printf("\nMultiplicacao dos valores = %.2f", a*b);
    printf("\nDivisao dos valores = %.2f", a/b);
    
    return 0;
}
