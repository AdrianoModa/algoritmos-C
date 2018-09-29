#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b;

    printf("Digite um primeiro numero inteiro: ");
    scanf("%d", &a);

    printf("Digite um segundo numero inteiro:  ");
    scanf("%d", &b);

    printf("O resultado da soma de %d + %d = %d", a,b,a+b);
    return EXIT_SUCCESS;
}
