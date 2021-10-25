/* 3. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana
correspondente a este número. Isto e, domingo se 1, segunda-feira se 2, e assim por diante.  */


#include <stdio.h>

int  opcao;  // variavel que receberá o numero para as comparações no switch

int main() {
	printf("Digite um numero inteiro de 1 a 7: ");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			printf("Domigo");
			break;
		case 2:
			printf("Segunda-feira");
			break;
		case 3:
			printf("Terça-feira");
			break;
		case 4:
			printf("Quarta-feira");
			break;
		case 5:
			printf("Quinta-feira");
			break;
		case 6:
			printf("Sexta-feira");
			break;
		case 7:
			printf("Sabado");
			break;
		default:
			printf("operador invalido!"); // caso seja digitado um numeros fora do intervalo de 1 a 7
	}
}
 
