/* 6. Faça um programa que receba dois números e mostre qual deles é o maior.  */


#include <stdio.h>

int n1, n2; //n1 = 1o numero escolhido, n2 = 2o numero escolhido

int main() {
	
	printf ("Digite o 1o numero: ");
	scanf("%d", &n1);
	printf ("Digite 2o numero: ");
	scanf("%d", &n2);
	
	if (n1 > n2){ // verifica se o 1o numero digitado é maior que o 2o
		printf("Maior: %d", n1);
		
	} 	else if (n2 > n1){ //verifica se o 2o numero digitado é maior que o 1o
		printf("Maior: %d", n2);
		
	}else {
		printf("Os numeros sao iguais!"); //resposta para o caso dos numeros serem iguais
	}
}

