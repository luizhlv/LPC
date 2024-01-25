/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main ( ) {
    setlocale(LC_ALL, "Portuguese");

    int x, y, z;
    x=y=10;
    z=++x;
    x=-x;
    y++;
    x=x+y-(z--);
    printf("x = %d, y = %d, z = %d", x, y, z);
    return 0;
}
