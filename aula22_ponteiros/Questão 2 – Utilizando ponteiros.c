#include <stdio.h>

int main(void) {
    int valor = 20;
    int *ponteiro;

    ponteiro = &valor;

    printf("Valor da variavel: %d\n", valor);
    printf("Endereco armazenado no ponteiro: %p\n", (void *) ponteiro);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
