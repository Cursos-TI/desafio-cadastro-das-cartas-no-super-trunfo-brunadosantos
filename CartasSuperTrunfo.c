#include <stdio.h>
#include <string.h> // possibilita utilizar a função strcspn na retirada do \n em fgets

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Definição de variáveis

    char estado[50];
    char codigo[50];
    char nome_cidade[50];
    int  populacao;
    float area;
    float pib;
    int ponto_turistico;

    // Cadastro das Cartas:

    printf("Carta 1\n");

    printf("Digite o estado: "); // Pede que o usuário insira o estado
    fgets(estado, 50, stdin); // le strings com espaço em branco, permite colocar estados com mais de uma palavra Exemplo:"Minas Gerais"
    estado[strcspn(estado, "\n")] = 0; // remove o caractere de nova linha (\n) que fgets pode incluir na string

    printf("Digite o código da carta: "); // Pede que o usuário insira o código da carta
    fgets(codigo, 50, stdin); // fgets adicionado para corrigir erro de impressão no terminal, pois, scanf impedia a inserção do dado "nome da cidade" e pulava para "população total".
    codigo[strcspn(codigo, "\n")] = 0; // remove o caractere de nova linha (\n) que fgets pode incluir na string

    printf("Digite o nome da cidade: "); // Pede que o usuário insira a população total
    fgets(nome_cidade, 50, stdin); // le strings com espaço em branco, permite colocar cidades com mais de uma palavra Exemplo:"São Paulo"
    nome_cidade[strcspn(nome_cidade, "\n")] = 0; // remove o caractere de nova linha (\n) que fgets pode incluir na string

    printf("Digite a população total: "); // Pede que o usuário insira a população total
    scanf("%d", &populacao); // le o dado inserido pelo usuário

    printf("Digite a área total em km²: "); // Pede que o usuário insira a área total em km²
    scanf("%f", &area); // le o dado inserido pelo usuário

    printf("Digite o PIB da cidade: R$ "); // Pede que o usuário insira o PIB da cidade
    scanf("%f", &pib); // le o dado inserido pelo usuário

    printf("Digite o total de pontos turisticos da cidade: "); // Pede que o usuário insira o total de pontos turisticos da cidade
    scanf("%d", &ponto_turistico); // le o dado inserido pelo usuário

    // Exibição dos Dados das Cartas:
    // Mostra os dados inseridos pelo usuário.

    printf("\n"); // Pula uma linha para separar o resultado das solicitações de inserção de dados.

    printf("Estado: %s\n", estado); // mostra o estado inserido pelo usuário.
    printf("Código: %s\n", codigo); // mostra o codigo da carta inserida pelo usuário.
    printf("Nome da Cidade: %s\n", nome_cidade); // mostra o nome da cidade inserida pelo usuário.
    printf("População: %d\n", populacao); // mostra a população total inserida pelo usuário.
    printf("Área: %.3f\n", area); // mostra a área total inserida pelo usuário.
    printf("PIB: R$ %.2f\n", pib); // mostra o pib inserido pelo usuário.
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico); // mostra o número de pontos turisticos inserido pelo usuário.

    return 0;
}

/* ---- ESPECIFICADOR DE FORMATO ----
    Diz como a mensagem deve aparecer na tela ou terminal do usuário. 
    Exemplo: %s %d %e %c

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica. 
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.

    printf("%formato1, %formato2", variavel1, variavel2)
*/
    
    
    
    
    