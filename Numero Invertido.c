#include <stdio.h>

int main(){

    int num, resto;
    int inverterNum = 0;

    printf("Digite um numero inteiro com mais de um digito: ");
    scanf("%d", &num);

    while(num != 0) {
        resto = num % 10;
        inverterNum = inverterNum*10 + resto;
        num = num / 10;
    }

    printf("Invertendo o numero digitado: %d", inverterNum);
    
    return 0;  
}  