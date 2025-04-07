#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Declaração de váriaveis para carta 1
    char estado1;           //recebe uma letra
    char codigo_carta1[3];  //recebe três caracteres, sendo uma letra e dois números
    char nome_cidade1[20];  //recebe o nome de uma cidade
    int populacao1;         //recebe um número inteiro
    float area1;            //recebe um número com casas decimais
    float pib1;             //recebe um número com casas decimais
    int n_ptos_tur1;        //recebe um número inteiro

    //Declaração de váriaveis para carta 2
    char estado2;           //recebe uma letra
    char codigo_carta2[3];  //recebe três caracteres, sendo uma letra e dois números
    char nome_cidade2[20];  //recebe o nome de uma cidade
    int populacao2;         //recebe um número inteiro
    float area2;            //recebe um número com casas decimais
    float pib2;             //recebe um número com casas decimais
    int n_ptos_tur2;        //recebe um número inteiro

    //inserção de dados da carta 1
    printf("Digite os dados da carta 1, de acordo com os itens solicitados:\n");

    printf("Digite uma letra para o estado da carta 1: ");
    scanf("%c",&estado1);

    printf("Digite o código da carta 1, composto por uma letra e dois números: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade 1:");
    scanf("    %s", nome_cidade1);

    //inserção de dados para carta 2

    //saída de dados para carta 1
    printf("Dados relativos a carta 1:\n");
    printf("Código da carta 1: %s\n", codigo_carta1);

    printf("Nome da cidade 1: %s\n", nome_cidade1);

    //saída de dados para carta 2
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
