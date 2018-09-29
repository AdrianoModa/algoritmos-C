#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main(int argc, char const *argv[]){    
    char cwd[PATH_MAX];
    if(getcwd(cwd, sizeof(cwd)) != NULL){
        printf("A pasta atual: %s\n", cwd);
    }else{
        perror("getcwd() error");
        return 1;
    }
    return 0;
}
