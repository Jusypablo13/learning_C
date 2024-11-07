#include <unistd.h>
#include <stdio.h>

int main(){
    int pid = fork();
    if(pid == 0){
        printf("Soy el hijo\n");
        execl("./hello", "hola", "Pedro", "Luis", "Mary", (char *)NULL);
        printf("Esta linea no se ejecuta");
    }
    printf("Soy el padre\n");
    return 0;
}