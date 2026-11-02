//ATIVIDADE 02 CADASTRO DE PRODUTOS 

#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50];
    char categoria[30];
    char copia[50];
    char descricao[100] = "Produto: ";
    
    printf("===== CADASTRO DE PRODUTOS =====\n");
    printf("Nome do produto: ");
    scanf("%49s", produto);
    printf("Categoria (HARDWARE ou PERIFERICO): ");
    scanf("%29s", categoria);
    
    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", produto);
    printf("Caracteres: %zu\n", strlen(produto));
    
    if (strcmp(categoria, "PERIFERICO") == 0) {
        printf("Categoria: Periferico\n");
    } else {
        printf("Categoria: Hardware\n");
    }
    
    strcpy(copia, produto);
    strcat(descricao, copia);
    
    printf("Descricao: %s\n", descricao);
    printf("Cadastro concluido!\n");
    
    return 0;
}
