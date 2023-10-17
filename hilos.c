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
    for(int thid=1; thid<101;thid++){       
        pthread_create(&t,NULL,holaHilo,&thid);
        pthread_create(&t,NULL,incrementaSaldo,NULL);
        printf("Thid = %d",thid);
    }
    pthread_exit(NULL);
}