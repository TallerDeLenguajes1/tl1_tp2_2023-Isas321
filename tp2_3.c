#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 7

int main(){
    int i,j;
    int mt[N][M];
    int *p;

//Formula de direccionamiento 
// C[i][j] <--> *(p+i*N+j) Donde N es la cantidad de columnas que tiene la matriz

    p=&mt[0][0];

    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *(p+i*M+j)=1+rand()%100;    
            printf("%d ", *(p+i*M+j));
            /*En cuando i=0 tendre  1 2 3 4 5 6 7*/
            // cuando i=1 tendre 8 9 10 11 12 13 14 etc
            // Es decir que la matriz se almacena en realidad como si fuese un vector
            // Todas las celdas una a la par de la otra
            // Pero c sabe interpretarlo como matriz
        }
        printf("\n");
    }
    printf("\n\n");
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            printf("%d ", mt[i][j]);
        }
        printf("\n");
    }

}