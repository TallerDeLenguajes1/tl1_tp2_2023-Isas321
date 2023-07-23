#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu {
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu; //Valores del arreglo tipos
};



void mostrarPC(struct compu nuevo[], int tam){
    for (int i = 0; i < tam; i++){
        printf("\nVelocidad: %d",nuevo[i].velocidad);
        printf("\nAnio: %d", nuevo[i].anio);
        printf("\nCantidad: %d", nuevo[i].cantidad);
        printf("\nTipo %s", nuevo[i].tipo_cpu);
    }
}



void mostrarPcVieja(struct compu nuevo[], int tam){
    int vieja, indice=0;
    vieja = nuevo[0].anio;
    for (int i = 0; i < tam; i++){
        if(nuevo[i].anio<vieja){
            vieja=nuevo[i].anio;
            indice=i;
        }
    }
    printf("\nVelocidad: %d",nuevo[indice].velocidad);
    printf("\nAnio: %d", nuevo[indice].anio);
    printf("\nCantidad: %d", nuevo[indice].cantidad);
    printf("\nTipo %s", nuevo[indice].tipo_cpu);
}


void mostrarPcVeloz(struct compu nuevo[], int tam){
    int veloz, indice=0;
    veloz = nuevo[0].anio;
    for (int i = 0; i < tam; i++){
        if(nuevo[i].anio>veloz){
            veloz=nuevo[i].anio;
            indice=i;
        }
    }
    printf("\nVelocidad: %d",nuevo[indice].velocidad);
    printf("\nAnio: %d", nuevo[indice].anio);
    printf("\nCantidad: %d", nuevo[indice].cantidad);
    printf("\nTipo %s", nuevo[indice].tipo_cpu);
}




int main(){
    struct compu nuevo[5];
    int indice;
    char tipos[6][10]={"Intel","AMD", "Celeron", "Athlon", "Core", "Pentium"};
    srand(time(NULL));

    for (int i = 0; i < 5; i++){
        nuevo[i].velocidad=1+rand()%3;
        nuevo[i].anio=2015+rand()%8;
        nuevo[i].cantidad=1+rand()%8;
        indice=rand()%6;
        nuevo[i].tipo_cpu=*(tipos+indice); 
        // tipos escrito de esta forma es la direccion de memoria en la que se encuentra la primera celda
        // entonces si le sumo algun indice me ire desplazando en las celdas del vector
        // 
    }
    //printf("\ntipo %s\n", *(tipos+1));
    mostrarPC(nuevo, 5);    // void mostrarPC(struct compu nuevo[], int tam);
    //Importante!
    //pero al llamar la funcion el vector lo cargo sin []
    printf("\n\nPc vieja\n");
    mostrarPcVieja(nuevo, 5);
    printf("\n\nPc veloz\n");
    //mostrarPC(nuevo, 5);
    mostrarPcVeloz(nuevo, 5);
    return 0;
}

