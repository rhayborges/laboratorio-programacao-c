//ATIVIDADE 02 - Leitura de 4 valores do usuário e exibição da matriz 2X2

#include <stdio.h>

int main(void) {
    int matriz[2][2];

    printf("Digite 4 valores inteiros para preencher a matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n--- Matriz Informada ---\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
