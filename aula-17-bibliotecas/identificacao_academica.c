//ATIVIDADE 03 IDENTIFICAÇÃO ACADEMICA 

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char cursoCodigo[10];
    char cursoNome[50];
    char mensagem[100] = "Ola, ";
    
    printf("===== IDENTIFICACAO ACADEMICA =====\n");
    printf("Nome do estudante: ");
    scanf("%49s", nome);
    printf("Codigo do curso (CC ou SI): ");
    scanf("%9s", cursoCodigo);
    
    if (strcmp(cursoCodigo, "CC") == 0) {
        strcpy(cursoNome, "Ciencia da Computacao");
    } else if (strcmp(cursoCodigo, "SI") == 0) {
        strcpy(cursoNome, "Sistemas de Informacao");
    } else {
        strcpy(cursoNome, "Curso Desconhecido");
    }
    
    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", nome);
    printf("Curso: %s\n", cursoNome);
    printf("Caracteres no nome: %zu\n", strlen(nome));
    
    strcat(mensagem, nome);
    strcat(mensagem, "!");
    printf("\n%s\n", mensagem);
    
    return 0;
}
