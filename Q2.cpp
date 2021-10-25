/* 2. Faça um programa em C para efetuar a conversão de um valor dado em Mbps para Kbps.  */


#include <stdio.h>
int main() {
	float n, c=0; //n = valor em Mbps, c = valor depois de convertido em Kbps
	
	printf("Digite o valor de Mbps: ");
	scanf("%f", &n);
	
	c = n * 1000;  //conversao 
	
	printf("O valor convertido em Kbps: %.2f", c );
	
}
