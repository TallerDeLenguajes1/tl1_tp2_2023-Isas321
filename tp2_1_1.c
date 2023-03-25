// codigo a completar

#include <stdio.h>
#include <stdlib.h>

int main(){  
    #define N 20
    int i;
    double vt[N];

    for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;         //Para usar la funcion rand es necesario llamar a la biblioteca stdlib.h
        printf("%f ", vt[i]);
    }
}