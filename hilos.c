#include <pthread.h>
#include <stdio.h>
int saldo;

void * holaHilo(){
    printf("Hola desde un hilo\n");
    pthread_exit(NULL);
}

void * incrementaSaldo(){
    printf("el saldo actual es %d\n",saldo);
    saldo = saldo + 100;
}

int main(){
    pthread_t t;
    saldo = 100;
    for(int i=0; i<100;i++){       
        pthread_create(&t,NULL,holaHilo,NULL);
        pthread_create(&t,NULL,incrementaSaldo,NULL);
    }
    pthread_exit(NULL);
}