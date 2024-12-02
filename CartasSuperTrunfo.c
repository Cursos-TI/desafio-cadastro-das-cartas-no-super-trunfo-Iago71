#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

 char cidade1[20], cidade2[20], cidade3[20], cidade4[20], cidade5[20], cidade6[20]; 
 int pop;

/* Mensagem de Apresentação do Jogo Trunfo*/
printf("Olá, Seja Bem-Vindo ao Super Truco com Países");
printf("Escolha uma cidade abaixo:\n");

printf("A01, A02, B01, B02\n");
scanf("%s", &cidade1);

printf("Agora vamos definir as propriedades da cidade: %s\n", &cidade1);
printf("Informe a População\n");
scanf("%d", &pop);
printf("Informe a Área da\n");
printf("Informe o PIB da\n");
printf("Informe o Número de Pontos Turísticos da\n");


    return 0;
}
