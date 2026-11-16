#include <stdio.h>

int main(void) {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *p = numeros; 
    int i;

    printf("Apresentando os elementos do vetor usando aritmetica de ponteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento [%d]: %d\n", i, *(p + i));
    }

    return 0;
}
