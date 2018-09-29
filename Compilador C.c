#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* I´m still trying... */

int main(int argc, char** argv) {

    char gcc[] = "gcc ";
    char filename[] = "Hello World.c";
    char gccParam[] = " -o ";  
    char arqName[] = "arquivo_compilado"; 
    // scanf("%s", filename);
    // scanf("%s", arqName);

    // for(i = 0; i < lenght-3; i++) {
    //    arqName[i] = filename[i];   
    // }

    system(strcat(strcat(gcc, filename), strcat(gccParam, arqName)));
    // printf("%s %s\n", strcat(strcat(gcc, filename), strcat(gccParam, arqName)));
    
    system("pause");
    return 0;
}