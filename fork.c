#include <unistd.h>
#include <stdio.h>

int main(){
    int a = 20;
    int pd = fork();
    if(pd == 0){
        printf("Soy el proceso hijo a=%d\n", a);
        sleep(20);
        return 0;
    }            
    printf("Soy el proceso padre a=%d\n", a);
    printf("Mi hijo es pd=%d\n", pd);
    sleep(20);
    return 0;
}