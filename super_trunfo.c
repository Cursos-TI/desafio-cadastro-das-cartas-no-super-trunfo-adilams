#include <stdio.h>
cadastro carta 1
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Definição de variáveis para os atributos da cidade
    char codigo[4] = "A01";
    char nome_cidade[50] = "Manaus";
    char estado[20] = "Amazonas";
    int populacao = 4281209;
    float area = 1571000.0;
    float pib = 42968.0;
    int pontos_turisticos = 10;

    // Solicitação de dados ao usuário
    printf("Cadastro de Cidade:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade);  // Corrigido para ler o nome da cidade com espaços

    printf("Digite o estado da cidade: ");
    scanf(" %[^\n]", estado);  // Corrigido para ler o estado com espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\nCidade cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome_cidade);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
