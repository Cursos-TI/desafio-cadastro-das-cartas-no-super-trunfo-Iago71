#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

 char cidade1[20], cidade2[20], cidade3[20], cidade4[20], cidade5[20], cidade6[20]; 
 int pop, pontosturisticos;
 float area, pib;

/* Mensagem de Apresentação do Jogo Trunfo*/
printf("Olá, Seja Bem-Vindo ao Super Truco com Países\n");
printf("Escolha uma cidade abaixo:\n");

/* Aqui será definido a cidade a ser Criada*/
printf("A01, A02, B01, B02\n");
scanf("%s", &cidade1);

/* Aqui será definido as Propriedadas da Cidade Escolhida*/
printf("Agora vamos definir as propriedades da cidade: %s\n", &cidade1);
printf("Informe a População\n");
scanf("%d", &pop);
printf("Informe a Área\n");
scanf("%f", &area);
printf("Informe o PIB\n");
scanf("%f", &pib);
printf("Informe o Número de Pontos Turísticos\n");
scanf("%d", &pontosturisticos);


/* Aqui será finalizado apresentando os dados da Cidade*/
printf("Parabéns, as propriedades da cidade %s foram criadas com sucesso!\n", cidade1);
printf("Cidade: %s - População: %d - Area: %f\n", cidade1, pop,area);
printf("PIB: %f - Pontos Turísticos: %d\n", pib, pontosturisticos);

    return 0;
}
