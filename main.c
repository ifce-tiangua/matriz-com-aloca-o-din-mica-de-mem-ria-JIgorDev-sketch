#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matriz, linhas, colunas, i, j;

    scanf("%d %d", &linhas, &colunas);

    if (linhas == 0 || colunas == 0) {
        printf("[matriz vazia]\n");
        return 0;
    }

    matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        printf("[matriz vazia]\n");
        return 0;
    }

    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("[matriz vazia]\n");
            return 0;
        }
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d", matriz[i][j]);
            if (j < colunas - 1)
                printf(" ");
        }
        printf("\n");
    }

    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
