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
        // La funcion rand()%100 nos entrega un numero entre 0 y 99
        // Es por ese motivo que le sumamos 1 en el codigo vt[i]=1+rand()%100;
        // Y asi tendremos valores 1-100
        printf("%.2f ", vt[i]); //Para mostrar dos decimales pongo .2f
    }
}