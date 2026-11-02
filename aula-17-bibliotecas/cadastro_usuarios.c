//ATIVIDADE 01 DE CADASTRO DE USUÁRIOS.

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100] = "Bem-vindo(a), ";
    
    printf("===== CADASTRO DE USUARIOS =====\n");
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("Digite seu perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);
    
    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    
    if (strcmp(perfil, "ADMIN") == 0) {
        printf("Perfil: Administrador\n");
    } else {
        printf("Perfil: Comum\n");
    }
    
    strcpy(confirmacao, nome);
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");
    
    printf("%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");
    
    return 0;
}
