/* 12. Construa um programa em C que determine (imprima) se um dado número N inteiro (recebido através do 
teclado) é PAR ou ÍMPAR. (Usar o operador resto: Ex: N%2)).  */

#include <stdio.h>

int N;

int main () {
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	if (N%2 == 0){ //operador de resto for igual a 0, numero é par
		printf("O numero %d e PAR!", N);
	}
	else {
		printf("O numero %d e IMPAR", N);
	}
}
