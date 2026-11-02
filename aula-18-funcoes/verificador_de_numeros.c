//ATIVIDADE 03 - IDENTIFICADOR DE NÚMEROS

#include <stdio.h>

int verificarPar(int num) {
    if (num % 2 == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    int numero;
    printf("===== VERIFICADOR DE NUMEROS =====\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (verificarPar(numero)) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }
    
    return 0;
}
