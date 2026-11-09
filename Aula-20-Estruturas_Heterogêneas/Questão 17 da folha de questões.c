Questão 17: Desenvolva um programa em Linguagem C que cadastre dois funcionários e identifique qual possui o maior salário. 


#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main(void) {
    Funcionario funcionario1;
    Funcionario funcionario2;
    
    printf("Informe o Nome do funcionario 01: ");
    scanf(" %49[^\n]", funcionario1.nome);

    printf("Informe a Idade do funcionario 01: ");
    scanf("%d", &funcionario1.idade);

    printf("Informe o Salario do funcionario 01: ");
    scanf("%f", &funcionario1.salario);


    printf("\nFuncionario 01: %s\n", funcionario1.nome);
    printf("Idade do funcionario 01: %d\n", funcionario1.idade);
    printf("Salario do funcionario 01: %.1f\n", funcionario1.salario);


    printf("\nNome do funcionario 02: ");
    scanf(" %49[^\n]", funcionario2.nome);

    printf("Idade do funcionario 02: ");
    scanf("%d", &funcionario2.idade);

    printf("Salario do funcionario 02: ");
    scanf("%f", &funcionario2.salario);


    printf("\nFuncionario 02: %s\n", funcionario2.nome);
    printf("Idade do funcionario 02: %d\n", funcionario2.idade);
    printf("Salario do funcionario 02: %.1f\n", funcionario2.salario);


    printf("\n--- Resultado da Comparação ---\n");
    if (funcionario1.salario > funcionario2.salario) {
        printf("O maior salário é o do(a): %s (%.1f)\n", funcionario1.nome, funcionario1.salario);
    } else if (funcionario2.salario > funcionario1.salario) {
        printf("O maior salário é o do(a): %s (%.1f)\n", funcionario2.nome, funcionario2.salario);
    } else {
        printf("Ambos possuem o mesmo salario.\n");
    }

    return 0;
}
