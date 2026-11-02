//ATIVIDADE 06 - CALCULADORA DE FATORIAL 

#include <stdio.h>

long long calcularFatorial(int n) {
    long long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main(void) {
    int num;
    printf("===== CALCULADORA DE FATORIAL =====\n");
    printf("Digite um numero (entre 0 e 12): ");
    scanf("%d", &num);
    
    if (num < 0 || num > 12) {
        printf("Por favor, digite um numero entre 0 e 12.\n");
    } else {
        printf("Fatorial de %d = %lld\n", num, calcularFatorial(num));
    }
    
    return 0;
}
