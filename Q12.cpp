/* 12. Construa um programa em C que determine (imprima) se um dado n�mero N inteiro (recebido atrav�s do 
teclado) � PAR ou �MPAR. (Usar o operador resto: Ex: N%2)).  */

#include <stdio.h>

int N;

int main () {
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	if (N%2 == 0){ //operador de resto for igual a 0, numero � par
		printf("O numero %d e PAR!", N);
	}
	else {
		printf("O numero %d e IMPAR", N);
	}
}
