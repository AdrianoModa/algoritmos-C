#include <stdio.h>

int main(int argc, char const *argv[])
{
    int verNumPrimo = 0, num;
    int contador = 1;

    printf("Entre com um Numero Inteiro Positivo: ");
    scanf("%d", &num);

    while(contador <= num){
        if(num % contador == 0){
            verNumPrimo = verNumPrimo + 1;
        }
        contador = contador + 1; 
    }

    if(verNumPrimo == 2){
        printf("O numero %d e PRIMO.", num);
    }
    else
    {
        printf("O numero %d nao e PRIMO.", num);
    }

    return 0;
}
