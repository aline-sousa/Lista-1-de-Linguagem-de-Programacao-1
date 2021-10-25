/*  11. Crie um programa em C que leia a idade de uma pessoa e informe a sua classe eleitoral: 
- não eleitor (abaixo de 16 anos); 
- eleitor obrigatório (entre a faixa de 18 e menor de 65 anos); 
- eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive).  */

#include <stdio.h>

int idade;

int main () { 
	printf("Digite a idade do eleitor: ");
	scanf("%d", &idade);
	
	if (idade < 16){
		printf("Nao e eleitor.");
	}
	else if (idade >= 18 && idade < 65){
		printf("Eleitor obrigatorio.");
	}
	else if (idade >= 16 && idade < 18 || idade >= 65){ // 16 a 18 (incompleto) ou maior de 65 anos completos
		printf("Eleitor facultativo.");
	}
	else 
		printf("Idade invalida!!!")	;
}
