// codigo implementado con punteros

#include <stdio.h>
#include <stdlib.h>

#define N 20 //Esta es una variable global va fuera del main y debajo de las bibliotecas

int main(){  
    int i;
    double vt[N];
    double *puntero;
    puntero=vt;     //Guardo la direccion de memoria del primer elemento del vector, direccion de v[0]
    srand(time(NULL));  // Es importante la inicializacion del reloj, para el rand  
    for(i = 0;i<N; i++)
    {
        *(puntero+i)=1+rand()%100;                      //Guardo el valor de rand en "vt[0+i]"                          
        printf("\nvt[%d]: %f ", i, *(puntero+i));       //Muestra el valor que hay en el vector en la direccion almacenada por el puntero + i, es decir muestra los que hay en "vt[0+i]"
    }
}
