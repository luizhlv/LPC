/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    float a;
    printf("Digite o valor em Fahrenheit");
    scanf("%f", &a);
    
    printf("\nValor em Celsius = %.2f °C", (a-32)*5/9);
    
    return 0;
}
