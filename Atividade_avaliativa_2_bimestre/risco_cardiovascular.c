Atividade de Sistema de Análise de Risco Cardiovascular. Dupla: Letícia Storch e Rhayanne Alves.

Problema: Uma clínica médica necessita de um programa para registrar informações de pacientes e realizar uma classificação simplificada de risco cardiovascular, considerando diferentes fatores associados à saúde.
Você foi contratado para desenvolver esse sistema em Linguagem C, utilizando os conhecimentos adquiridos durante o segundo bimestre, especialmente matrizes, strings e funções. O programa deverá permitir o 
cadastro de até 5 pacientes, armazenar seus fatores de risco, calcular a pontuação correspondente e apresentar a classificação de cada paciente.

Observações: As pontuações e classificações apresentadas são fictícias, utilizadas exclusivamente para fins didáticos, e não apresenta, um instrumento médico validado. 
1 - Entrada e Armazenamento dos dados:
O programa deverá solicitar, para cada paciente:
• Nome do paciente.
• Idade.
• Pressão arterial sistólica (mmHg).
• Tabagismo (1 – Sim / 0 – Não).
• Diabetes (1 – Sim / 0 – Não).
• Histórico de doença cardíaca (1 – Sim / 0 – Não).
• Colesterol LDL (mg/dL).
• Peso (kg).
• Altura (m).
• Sedentarismo (1 – Sim / 0 – Não).
• Alimentação rica em ultraprocessados (1 – Sim / 0 – Não).
• Estresse crônico elevado (1 – Sim / 0 – Não).
• Sono inadequado (1 – Sim / 0 – Não).
• Sexo biológico masculino (1 – Sim / 0 – Não).

Requisitos de armazenamento:
1. Utilizar uma matriz de caracteres para armazenar os nomes dos pacientes.
2. Utilizar uma matriz numérica para armazenar os fatores de risco de cada paciente.
3. Utilizar estruturas de repetição para percorrer os pacientes e seus respectivos fatores.

2. Regras de pontuação:
O sistema deverá calcular a pontuação de cada paciente de acordo com os critérios abaixo.  
Fatores críticos – 3 pontos cada
Fator:
Diabetes, Doença cardíaca anterior, Colesterol LDL, IMC
Condição:
Possui diabetes, Possui histórico, Igual ou superior a 160 mg/dL, Igual ou superior a 30
O IMC deverá ser calculado pela fórmula:
IMC = peso / (altura × altura)

Fatores leves – 1 ponto cada
• Sedentarismo.
• Alimentação rica em ultraprocessados.
• Estresse crônico elevado.
• Sono inadequado.
• Sexo biológico masculino.
Para cada fator, atribuir a pontuação indicada quando a condição for atendida e zero ponto caso
contrário.
  
3. Classificação do risco
Após calcular a pontuação total, o programa deverá apresentar a classificação correspondente:

Pontuação total:          Classificação fictícia:
0 a 4                      Menor de 10%
5 a 9                      Entre 10% e 20%
10 a 14                    Entre 20% e 30%
15 a 18                    Entre 30% e 50%
19 a 22                    Acima de 50%
O programa deverá apresentar o nome do paciente e sua respectiva classificação. Não será necessário
exibir a pontuação numérica.

4. Saída esperada:
O programa deverá apresentar um relatório semelhante ao exemplo abaixo:

========================================
 SISTEMA DE ANALISE DE RISCO
========================================
Quantidade de pacientes: 3
Paciente 1: Ana
Paciente 2: Carlos
Paciente 3: Mariana
========================================
 RELATORIO DE RISCO
========================================
Paciente: Ana
Classificacao: Menor de 10%
Paciente: Carlos
Classificacao: Entre 20% e 30%
Paciente: Mariana
Classificacao: Entre 10% e 20%
========================================
Os nomes e as classificações são apenas ilustrativos.
  
5. Orientações para desenvolvimento:
• O programa deverá ser desenvolvido em Linguagem C.
• Poderão ser utilizadas as bibliotecas stdio.h e string.h.
• O programa deverá permitir o cadastro de 1 a 5 pacientes.
• Utilizar matrizes para armazenar os dados dos pacientes e strings para identificar seus nomes.
• Utilizar estruturas condicionais e de repetição conforme a necessidade.
• Implementar funções próprias para organizar as operações do programa, incluindo o cálculo da
pontuação total, a classificação do risco e a apresentação dos resultados.
• Utilizar parâmetros e valores de retorno adequados às funções desenvolvidas.
• Considerar que o usuário informará dados válidos, não sendo necessário implementar
validação de entrada.
• Organizar o código de forma clara, utilizando nomes de variáveis e funções que facilitem sua
compreensão e manutenção.

6. Entrega da atividade: 
• A atividade poderá ser desenvolvida individualmente ou em dupla.
• Vale 1,0 ponto
• Os estudantes deverão criar o arquivo risco_cardiovascular.c, compilar e testar o programa
antes da entrega.
• O código-fonte deverá ser disponibilizado no Blog da Disciplina, dentro do prazo estabelecido
• Em caso de atividade realizada em dupla, deverão ser informados os nomes completos dos dois
integrantes na postagem.
• Cada dupla deverá realizar apenas uma postagem, identificando os integrantes responsáveis
pelo desenvolvimento.
• Os estudantes deverão ser capazes de explicar o funcionamento do programa e das funções
implementadas. 

===================================================================================================
                              CÓDIGO DA ATIVIDADE ABAIXO:
  
#include <stdio.h>

int main() {
    int qtd, i;
    
    // Parte de armazenar os dados de até 5 pacientes
    char nomes[5][50];
    int idade[5], pressao[5], tabagismo[5], diabetes[5], doenca_cardiaca[5];
    float ldl[5], peso[5], altura[5];
    int sedentarismo[5], ultraprocessados[5], estresse[5], sono[5], sexo_masculino[5];

    printf("========================================\n");
    printf(" SISTEMA DE ANALISE DE RISCO CARDIOVASCULAR\n");
    printf(" Dupla: Leticia Storch e Rhayanne Alves\n");
    printf("========================================\n");

    printf("Informe a quantidade de pacientes (1 a 5): ");
    scanf("%d", &qtd);

    if (qtd < 1) qtd = 1;
    if (qtd > 5) qtd = 5;

    // 1 - Entrada de Dados
    for (i = 0; i < qtd; i++) {
        printf("\n--- Cadastro do Paciente %d ---\n", i + 1);
        
        printf("Nome do paciente: ");
        scanf("%s", nomes[i]); 

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Pressao arterial sistolica (mmHg): ");
        scanf("%d", &pressao[i]);

        printf("Tabagismo (1 - Sim / 0 - Nao): ");
        scanf("%d", &tabagismo[i]);

        printf("Diabetes (1 - Sim / 0 - Nao): ");
        scanf("%d", &diabetes[i]);

        printf("Historico de doenca cardiaca (1 - Sim / 0 - Nao): ");
        scanf("%d", &doenca_cardiaca[i]);

        printf("Colesterol LDL (mg/dL): ");
        scanf("%f", &ldl[i]);

        printf("Peso (kg): ");
        scanf("%f", &peso[i]);

        printf("Altura (m): ");
        scanf("%f", &altura[i]);

        printf("Sedentarismo (1 - Sim / 0 - Nao): ");
        scanf("%d", &sedentarismo[i]);

        printf("Alimentacao rica em ultraprocessados (1 - Sim / 0 - Nao): ");
        scanf("%d", &ultraprocessados[i]);

        printf("Estresse cronico elevado (1 - Sim / 0 - Nao): ");
        scanf("%d", &estresse[i]);

        printf("Sono inadequado (1 - Sim / 0 - Nao): ");
        scanf("%d", &sono[i]);

        printf("Sexo biologico masculino (1 - Sim / 0 - Nao): ");
        scanf("%d", &sexo_masculino[i]);
    }

    // 4 - Saída esperada (Relatório)
    printf("\n========================================\n");
    printf(" SISTEMA DE ANALISE DE RISCO\n");
    printf("========================================\n");
    printf("Quantidade de pacientes: %d\n", qtd);
    
    for (i = 0; i < qtd; i++) {
        printf("Paciente %d: %s\n", i + 1, nomes[i]);
    }

    printf("========================================\n");
    printf(" RELATORIO DE RISCO\n");
    printf("========================================\n");

    for (i = 0; i < qtd; i++) {
        int pontos = 0;
        float imc;

        // Fatores Críticos (3 pontos cada)
        if (diabetes[i] == 1) pontos += 3;
        if (doenca_cardiaca[i] == 1) pontos += 3;
        if (ldl[i] >= 160.0) pontos += 3;

        if (altura[i] > 0) {
            imc = peso[i] / (altura[i] * altura[i]);
            if (imc >= 30.0) pontos += 3;
        }

        // Fatores Leves (1 ponto cada)
        if (sedentarismo[i] == 1) pontos += 1;
        if (ultraprocessados[i] == 1) pontos += 1;
        if (estresse[i] == 1) pontos += 1;
        if (sono[i] == 1) pontos += 1;
        if (sexo_masculino[i] == 1) pontos += 1;

        // Exibição da classificação baseada na pontuação
        printf("Paciente: %s\n", nomes[i]);
        printf("Classificacao: ");
        
        if (pontos <= 4) {
            printf("Menor de 10%%\n");
        } else if (pontos <= 9) {
            printf("Entre 10%% e 20%%\n");
        } else if (pontos <= 14) {
            printf("Entre 20%% e 30%%\n");
        } else if (pontos <= 18) {
            printf("Entre 30%% e 50%%\n");
        } else {
            printf("Acima de 50%%\n");
        }
    }
    printf("========================================\n");

    return 0;
}
