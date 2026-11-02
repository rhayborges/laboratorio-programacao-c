//ATIVIDADE 02 - COMPARADOR DE PREÇOS

#include <stdio.h>

float maiorPreco(float p1, float p2) {
    if (p1 > p2) return p1;
    return p2;
}

int main(void) {
    float p1, p2;
    printf("===== COMPARADOR DE PRECOS =====\n");
    printf("Preco 1: ");
    scanf("%f", &p1);
    printf("Preco 2: ");
    scanf("%f", &p2);
    
    if (p1 == p2) {
        printf("Os precos sao iguais: R$ %.2f\n", p1);
    } else {
        printf("Maior preco: R$ %.2f\n", maiorPreco(p1, p2));
    }
    
    return 0;
}
