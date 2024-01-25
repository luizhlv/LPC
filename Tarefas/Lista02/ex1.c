/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main ( ) {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    printf("Digite o primeiro inteiro\n");
    scanf("%d", &num1);
    printf("Digite o segundo inteiro\n");
    scanf("%d", &num2);
    
    printf("%d > %d é %d\n", num1, num2, num1>num2);
    printf("%d < %d é %d\n", num1, num2, num1<num2);
    printf("%d >= %d é %d\n", num1, num2, num1>=num2);
    printf("%d <= %d é %d\n", num1, num2, num1<=num2);
    printf("%d == %d é %d\n", num1, num2, num1==num2);
    printf("%d != %d é %d\n", num1, num2, num1!=num2);
    
    return 0;
}
