#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
typedef struct { // Estrutura para declarar variáveis que definem uma cidade
    char nomeCidade[50], codCarta[3];
    int populacao, pontosTuristicos;
    float area, pib;
} Cidade;

int main() {
   Cidade cidades[2]; // Array para armazenar as cidades cadastradas
    printf("###### DESAFIO SUPER TRUNFO 2 ######\n");
    
    for (int i = 0; i < 2; i++) {
        printf("\nDigite o nome da %d.a cidade: ", i + 1);
        // Usando fgets para ler o nome da cidade incluindo espaços
        fgets(cidades[i].nomeCidade, sizeof(cidades[i].nomeCidade), stdin);
        
        // Remover o '\n' que fgets pode deixar no final da string
        cidades[i].nomeCidade[strcspn(cidades[i].nomeCidade, "\n")] = '\0';

        printf("Digite o código da carta com três dígitos [Exemplo: A01]: ");
        scanf("%s", cidades[i].codCarta);

        getchar(); // Consumir o '\n' deixado pelo scanf anterior
        
        printf("Digite a população da cidade: ");
        scanf("%d", &cidades[i].populacao);  // Ler inteiro

        getchar(); // Consumir o '\n' deixado pelo scanf anterior

        printf("Digite a área em km²: ");
        scanf("%f", &cidades[i].area);  // Ler número decimal (float)

        getchar(); // Consumir o '\n' deixado pelo scanf anterior

        printf("Digite o PIB da cidade: ");
        scanf("%f", &cidades[i].pib);  // Ler número decimal (float)

        getchar(); // Consumir o '\n' deixado pelo scanf anterior

        printf("Digite o número de pontos turísticos da cidade: ");
        scanf("%d", &cidades[i].pontosTuristicos);  // Ler inteiro
        
        // Consumir o '\n' deixado após o último scanf
        getchar(); 
    }

    printf("\n###### CARTAS COMPETINDO ######");
    
    // Exibição das Cartas:
    for (int i = 0; i < 2; i++) {
        printf("\nCarta: %s\nCidade: %s\nPopulação: %d\nÁrea: %.1f km²\nPIB: R$ %.2f\nNúmero de pontos turísticos: %d\n", 
        cidades[i].codCarta,
        cidades[i].nomeCidade,
        cidades[i].populacao,
        cidades[i].area,
        cidades[i].pib,
        cidades[i].pontosTuristicos);
    }

    // Comparação das Cartas:
    
    // Comparando a população
    if (cidades[0].populacao > cidades[1].populacao){
        printf("\n%s é mais populosa", cidades[0].nomeCidade);
    } else if (cidades[0].populacao < cidades[1].populacao){
        printf("\n%s é mais populosa", cidades[1].nomeCidade);
    } else {
        printf("Ambas as cidades empatam no quisito população.");
    }

    // Comparando a área
    if (cidades[0].area > cidades[1].area){
        printf("\n%s é maior em área", cidades[0].nomeCidade);
    } else if (cidades[0].area < cidades[1].area){
        printf("\n%s é maior em área", cidades[1].nomeCidade);
    } else {
        printf("Ambas as cidades possui o mesmo tamanho de território.");
    }

    // Comparando o PIB
    if (cidades[0].pib > cidades[1].pib){
        printf("\n%s possui mais recursos financeiros (PIB)", cidades[0].nomeCidade);
    } else if (cidades[0].pib < cidades[1].pib){
        printf("\n%s possui mais recursos financeiros (PIB)", cidades[1].nomeCidade);
    } else {
        printf("Ambas as cidades possui o mesmo PIB.");
    }

    // Comparando pontos turísticos
    if (cidades[0].pontosTuristicos > cidades[1].pontosTuristicos){
        printf("\n%s possui mais pontos turísticos", cidades[0].nomeCidade);
    } else if (cidades[0].pontosTuristicos < cidades[1].pontosTuristicos){
        printf("\n%s possui mais pontos turísticos", cidades[1].nomeCidade);
    } else {
        printf("Ambas as cidades possui a mesma quantidade de pontos turísticos.");
    }

    return 0;
}
