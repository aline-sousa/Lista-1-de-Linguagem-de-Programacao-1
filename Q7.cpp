/* 7. Um reality show realizou uma prova onde os participantes tinham que buscas bolas de 3 cores diferentes, e 
de acordo com a tabela abaixo cada um teria uma pontuação:
 Bola Verde: 10 pontos
 Bola amarela: 5 pontos
 Bola branca: 3 pontos
Construa um programa em C que leia a quantidade de bolas de cada cor e apresente a pontuação final do 
participante.    */

#include <stdio.h>
int verde, amarela, branca, Pverde, Pamarela, Pbranca, pontuacao =0;

int main () {
	printf("Escolha a quantidade de bolas de cada cor\n");
	printf("Quantidade de bola verde: ");
	scanf("%d", &verde);
	printf("Quantidade de bola amarela: ");
	scanf("%d", &amarela);
	printf("Quantidade de bola branca: ");
	scanf("%d", &branca);
	
	Pverde = verde * 10;
	Pamarela = amarela * 5;
	Pbranca = branca * 3;
	
	pontuacao = Pverde + Pamarela + Pbranca;
	
	printf("A pontuacao final do participante: %d", pontuacao);
}
