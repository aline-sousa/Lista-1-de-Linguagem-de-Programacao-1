/*  8. O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e 
dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 25% e os 
impostos de 42%, escrever um programa em C que receba o custo de f�brica de um carro e escreva o custo 
ao consumidor.  */

#include <stdio.h>

float cf, per = 25/100, i = 42/100, pd, imp, cc = 0; //cf = custo de fabrica, per= percentagem, i = impostos, cc = custo ao consumidor


int main (){
	printf("Digite o custo de fabrica de um carro R$ ");
	scanf("%f", &cf);
	
	pd = cf + (per * cf); //percentagem do distribuidor aplicados ao custo de fabrica
	imp = cf + (i * cf); //impostos aplicados ao custo de fabrica
	
	cc = cf + pd + imp;
	
	printf("cf = %.2f", cf);
	printf("O custo ao consumidor R$ %.2f", cc);
	
}
