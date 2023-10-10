#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
int N;
    printf("Valores para N: ");
    scanf("%d", &N);
	  srand(time(NULL));

    
    int matriz[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 10 + 1; 
        }
    }

    int sumatriangular = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            sumatriangular += matriz[i][j];
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Suma triangular superior: %d\n", sumatriangular);

    return 0;
}

