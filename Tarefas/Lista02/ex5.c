/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main ( ) {
    setlocale(LC_ALL, "Portuguese");

    int a, b, x;
    printf("Digite o valor de A");
    scanf("%d", &a);
    printf("\nDigite o valor de B");
    scanf("%d", &b); 
    
    printf("\nO valor de A é igual a: %d", a);
    printf("\nO valor de B é igual a: %d", b);
    
    x=b;
    b=a;
    
    printf("\nTrocando os valores:");
    printf("\nO valor de A é igual a: %d", x);
    printf("\nO valor de B é igual a: %d", b);

    return 0;
}

