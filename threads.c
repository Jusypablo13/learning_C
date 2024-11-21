#include <stdio.h>
#include <pthread.h>

void * printHello(void *arg){
    int hid = *((int *)arg);
    printf("Hello from thread %d\n", hid);
    pthread_exit(NULL);
}

int main(){
    int num_threads = 20;
    pthread_t threadStatus[num_threads];
    int hids[num_threads];
    for(int i=0; i<num_threads; i++){
        hids[i] = i;
        pthread_create(&threadStatus[i], NULL, printHello, (void *)&hids[i]);
    }
    pthread_exit(NULL);
}