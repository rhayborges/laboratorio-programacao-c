#include <stdio.h>

int main(void) {
    char palavra[50];
    int contador = 0;
    
    printf("Digite uma palavra: ");
    scanf("%49s", palavra);
    
    // Percorre os caracteres manualmente até encontrar o terminador '\0' (sem usar strlen)
    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }
    
    printf("A palavra digitada possui %d letras.\n", contador);
    
    return 0;
}
