#include <iostream>
#include <stdio.h>
int main() {
    int numero;
    printf("inserire un numero");
    scanf("%d",&numero);
    if (numero%2==0)
        printf("numero pari");
    else
        printf("numero dispari");
    return 0;
}
