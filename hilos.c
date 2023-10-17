#include <pthread.h>
#include <stdio.h>
int saldo;

void * holaHilo(void *thid){
    printf("Hola desde un hilo\n",*((int *)thid));
    pthread_exit(retval: NULL);
}

void * incrementaSaldo(){
    printf("el saldo actual es %d\n",saldo);
    saldo = saldo + 100;
}

int main(){
    pthread_t t;
    saldo = 100;
    int thid = 1;
    for(int i=0; i<100;i++){       
        pthread_create(&t,NULL,holaHilo,NULL);
        pthread_create(&t,NULL,incrementaSaldo,NULL);
        thid = thid + 1;
        printf("Thid = %d",thid);
    }
    pthread_exit(NULL);
}