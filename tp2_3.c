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
        }
        printf("\n");
    }
}