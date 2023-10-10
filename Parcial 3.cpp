#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int filas, columnas;

    printf("Columnas: ");
    scanf("%d", &columnas);
    printf("Filas:");
    scanf("%d", &filas);

    if (filas <= 0 || columnas <= 0)
	{
        return 1;
    }

    int matriz1[filas][columnas], matriz2[filas][columnas], resultado[filas][columnas];

srand(time(NULL));

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz1[i][j] = rand() % 10;
            matriz2[i][j] = rand() % 10;
        }
    }

    printf("Matriz a:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("Matriz b:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz2[i][j]);
        }
        printf("\n");
    }

    
    printf("Suma:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    
    printf("Resta:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    if (columnas != filas) {
	
    } 
	else 
	{
        printf("Multiplicación:\n");
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                resultado[i][j] = 0;
                for (int k = 0; k < columnas; k++) {
                    resultado[i][j] += matriz1[i][k] * matriz2[k][j];
                }
                printf("%d\t", resultado[i][j]);
            }
            printf("\n");
        }
    }

   
    printf("Diagonal de la matriz a:\n");
    for (int i = 0; i < filas; i++) {
        printf("%d\t", matriz1[i][i]);
    }
    printf("\n");

    
    printf("Suma triangular b:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = i; j < columnas; j++) {
            printf("%d\t", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 

