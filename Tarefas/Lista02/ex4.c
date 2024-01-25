/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    float a, b;
    printf("Qual a altura da lata em cm?");
    scanf("%f", &a); 
    printf("Qual o raio da lata em cm?");
    scanf("%f", &b);
    
    printf("\nVolume da lata= %.2f cm²", 3.14159*b*b*a);
    printf("\nRaio da lata = %.0f cm", b);
    printf("\nAltura da lata = %.0f cm", a);
    
    
    return 0;
}
