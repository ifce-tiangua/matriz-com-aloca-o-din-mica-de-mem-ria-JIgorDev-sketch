#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matriz;
    int linhas, colunas;
    int i, j, k;

    if (scanf("%d %d", &linhas, &colunas) != 2) {
        printf("[Matriz vazia]\n");
        return 0;
    }

    if (linhas == 0 || colunas == 0) {
        printf("[Matriz vazia]\n");
        return 0;
    }

    matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        printf("[Matriz vazia]\n");
        return 0;
    }

    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            for (k = 0; k < i; k++) {
                free(matriz[k]);
            }
            free(matriz);
            printf("[Matriz vazia]\n");
            return 0;
        }
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (scanf("%d", &matriz[i][j]) != 1) {
                for (k = 0; k < linhas; k++) {
                    free(matriz[k]);
                }
                free(matriz);
                printf("[Matriz vazia]\n");
                return 0;
            }
        }
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d", matriz[i][j]);
            if (j < colunas - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
