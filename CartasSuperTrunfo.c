


#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

 char cidade1[50], estado[50], codigodaCarta[50], cidade4[20], cidade5[20], cidade6[20]; 
 int pop, pontosturisticos;
 float area, pib, Dpopulacional, pibcapita;

/* Mensagem de Apresentação do Jogo Trunfo*/
printf("Olá, Seja Bem-Vindo ao Super Truco com Países\n");
printf("Escolha um estado abaixo:\n");
printf("A. , B , C , D \n");
scanf("%s", &estado);

/* Aqui será definido a cidade a ser Criada*/
printf("Agora Escolha uma cidade:\n");
scanf("%s", &cidade1);

/* Aqui será definido as Propriedadas da Cidade Escolhida*/
printf("\n");
printf("Agora vamos definir as propriedades da cidade: %s\n", &cidade1);

printf("Defina a População -\n");
scanf("%d", &pop);
printf("Defina a Área -\n");
scanf("%f", &area);
printf("Defina o PIB -\n");
scanf("%f", &pib);
printf("Defina o Número de Pontos Turísticos\n");
scanf("%d", &pontosturisticos);

/* Aqui será Realizado o calculo da Densidade Populacional e o PIB per Capita*/
Dpopulacional = pop / area;
pibcapita = pib / pop;


/* Aqui será finalizado apresentando os dados da Cidade*/
//printf("\n");



printf("Parabéns! as propriedades da cidade %s foram criadas com sucesso!\n", cidade1);

printf("Código da Carta: %s01\n", estado);
printf("Cidade: %s\n",cidade1); 
printf("População: %d\n",pop); 
printf("Area: %.3f\n",area); 
printf("PIB: %.3f\n",pib); 
printf("Pontos Turisticos: %d\n",pontosturisticos); 

printf("Densidade Populacional: %.2f\n",Dpopulacional); 
printf("Pib Per Capita: %.2f\n",pibcapita); 
/*
printf("Cidade: %s - População: %d - Area: %f\n", cidade1, pop,area);
printf("PIB: %f - Pontos Turísticos: %d\n", pib, pontosturisticos);
*/
    return 0;
}
