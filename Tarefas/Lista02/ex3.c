/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    float a, b;
    printf("Digite a velocidade média");
    scanf("%f", &a); 
    printf("Digite o tempo em horas");
    scanf("%f", &b);
    
    printf("\nVelocidade média = %.0f", a);
    printf("\nTempo gasto = %.2f h", b);
    printf("\nDistância percorrida= %.0f", b*a);
    printf("\nQuantidade de combustível consumida = %.2f L", (b*a)/12);
    
    
    return 0;
}
