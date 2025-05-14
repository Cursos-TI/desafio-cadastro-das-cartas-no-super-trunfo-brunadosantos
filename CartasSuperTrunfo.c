#include <stdio.h>
#include <string.h> // possibilita utilizar a função strcspn na retirada do caractere de nova linha (\n) em fgets.

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // DEFINIÇÃO DE VARIÁVEIS
    
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int ponto_turistico;

    // CADASTRO DE CARTAS 1

    // printf -> Solicita ao usuário que insira os dados necessários. Exemplo: "estado, cidade, população..."
    // scanf -> Le e armazena os dados em memória.
    // fgets -> Permite ler strings com espaços em branco. Exemplo:"Minas Gerais, São Paulo...". 
    // strcspn -> Remove o caractere de nova linha (\n) que fgets pode incluir na string.
    // fgetc -> Evita problemas de buffer do scanf consumindo o caractere de nova linha (\n).

    printf("----- CARTA 1 -----\n");
    
    printf("Digite o nome do estado: ");
    fgets(estado, 50, stdin);
    estado[strcspn(estado, "\n")] = 0; // 

    printf("Digite o código da carta: ");
    scanf("%s", codigo);
    fgetc(stdin);

    printf("Digite o nome da cidade: "); 
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite a população total: "); 
    scanf("%d", &populacao);

    printf("Digite a área total em km²: "); 
    scanf("%f", &area);

    printf("Digite o PIB da cidade: "); 
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%d", &ponto_turistico);
    fgetc(stdin);

    printf("\n"); // Pula uma linha para ajudar na leitura e separação dos dados no terminal

    // EXIBIÇÃO DOS DADOS DAS CARTAS 1

    // printf -> Responsável por exibir os dados armazenados em memória e digitados pelo usuário no terminal.

    printf("----- DADOS CARTA 1 -----\n");

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f\n", area);
    printf("PIB: R$ %.3f\n", pib);
    printf("Número de Pontos turísticos: %d\n", ponto_turistico);

    printf("\n"); // Pula uma linha para ajudar na leitura e separação dos dados no terminal

    // CADASTRO DE CARTAS 2

    // printf -> Solicita ao usuário que insira os dados necessários. Exemplo: "estado, cidade, população..."
    // scanf -> Le e armazena os dados em memória.
    // fgets -> Permite ler strings com espaços em branco. Exemplo:"Minas Gerais, São Paulo...". 
    // strcspn -> Remove o caractere de nova linha (\n) que fgets pode incluir na string.
    // fgetc -> Evita problemas de buffer do scanf consumindo o caractere de nova linha (\n).

    printf("----- CARTA 2 -----\n");

    printf("Digite o nome do estado: ");
    fgets(estado, 50, stdin);
    estado[strcspn(estado, "\n")] = 0;

    printf("Digite o código da carta: ");
    scanf("%s", codigo);
    fgetc(stdin);

    printf("Digite o nome da cidade: ");
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite a população total: ");
    scanf("%d", &populacao);

    printf("Digite a área total em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%d", &ponto_turistico);
    fgetc(stdin);

    printf("\n"); // Pula uma linha para ajudar na leitura e separação dos dados no terminal

    // EXIBIÇÃO DOS DADOS DAS CARTAS 2

    // printf -> Responsável por exibir os dados armazenados em memória e digitados pelo usuário no terminal.

    printf("----- DADOS CARTA 2 -----\n");
    
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.3f\n", area);
    printf("PIB: R$ %.3f\n", pib);
    printf("Número de Pontos turísticos: %d\n", ponto_turistico);

    printf("\n"); // Pula uma linha para ajudar na leitura e separação dos dados no terminal

    return 0;
}
    
    
    
    
    