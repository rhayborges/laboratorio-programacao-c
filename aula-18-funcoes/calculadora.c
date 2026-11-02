//ATIVIDADE 01 - CALCULADORA

#include <stdio.h>

void exibirMenu(void) {
    printf("\n===== CALCULADORA =====\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
}

float somar(float a, float b) { return a + b; }
float subtrair(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) { return a / b; }

int main(void) {
    int opcao;
    float n1, n2, resultado;
    
    do {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        if (opcao >= 1 && opcao <= 4) {
            printf("Primeiro numero: ");
            scanf("%f", &n1);
            printf("Segundo numero: ");
            scanf("%f", &n2);
            
            switch(opcao) {
                case 1:
                    resultado = somar(n1, n2);
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 2:
                    resultado = subtrair(n1, n2);
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 3:
                    resultado = multiplicar(n1, n2);
                    printf("Resultado: %.2f\n", resultado);
                    break;
                case 4:
                    if (n2 == 0) {
                        printf("Erro: Divisao por zero nao permitida!\n");
                    } else {
                        resultado = dividir(n1, n2);
                        printf("Resultado: %.2f\n", resultado);
                    }
                    break;
            }
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }
    } while (opcao != 0);
    
    printf("Calculadora encerrada.\n");
    return 0;
}
