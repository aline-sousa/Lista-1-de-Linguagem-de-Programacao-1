/*1. Elaborar um programa em C que apresente o valor da convers�o em d�lar (US$) de um valor lido em real, o
programa deve solicitar a cota��o do d�lar e tamb�m a quantidade de reais dispon�vel com o usu�rio. */

#include <stdio.h>
int main() {
    
	float n, c, v = 0;

    printf("Digite o valor em real= ");
    scanf("%f", &n);
    
    printf("Digite o valor de cotacao do dolar = ");
    scanf("%f", &c);
    v = n / c;
    
    printf("O valor convertido em dolar (US$) = %.2f", v);

}
