//ATIVIDADE 04 - CONTROLE DE ESTOQUE

#include <stdio.h>

int dobro(int qtd) {
    return qtd * 2;
}

int main(void) {
    int qtdInicial;
    printf("===== CONTROLE DE ESTOQUE =====\n");
    printf("Quantidade inicial: ");
    scanf("%d", &qtdInicial);
    
    printf("Quantidade apos duplicacao: %d\n", dobro(qtdInicial));
    return 0;
}
