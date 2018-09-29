#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int num;

    printf("Entre com um numero inteiro não negativo: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("O numero %d e PAR!", num);
    }
    else
    {
        printf("O numero %d e IMPAR!", num);
    }
        
    return 0;
}
