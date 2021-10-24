/*1. Elaborar um programa em C que apresente o valor da conversão em dólar (US$) de um valor lido em real, o
programa deve solicitar a cotação do dólar e também a quantidade de reais disponível com o usuário. */

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
