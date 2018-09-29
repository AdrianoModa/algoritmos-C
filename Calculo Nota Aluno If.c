#include <stdio.h>
#include <string.h>

int main() {

    float nota1, nota2, nota3, media;
    char aluno[20];
    printf("Digite seu Nome: ");
    scanf("%s", &aluno);

    printf("%s, digite sua Nota1: ", aluno);
    scanf("%f", &nota1);

    printf("%s, digite sua Nota2: ", aluno);
    scanf("%f", &nota2);

    printf("%s, digite sua Nota3: ", aluno);
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3; 
    
    if (media >=8) {
        printf("%s, Parabens!! Voce foi APROVADO sua media: %f", aluno, media);
    }
    else {
        printf("%s, Lamento!! Voce foi REPROVADO sua media: %f", aluno, media);
    }  
    
    return 0;

}