/*  14. Construa um programa em C para determinar se o indiv�duo est� com um peso favor�vel. Essa situa��o � 
determinada atrav�s do IMC (�ndice de Massa Corp�rea), que � definida como sendo a rela��o entre o peso 
(PESO) e o quadrado da Altura (ALTURA) do indiv�duo. Ou seja, IMC = PESO / ALTURA �   e, a situa��o do peso � determinada pela tabela abaixo:  */

#include <stdio.h>

float peso, altura, IMC;

int main(){
	printf("Digite o peso (em Kg): ");
	scanf("%f", &peso);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	IMC = peso / (altura * altura);
	
	if (IMC < 20){
		printf("Abaixo do peso");
	}
	else if (IMC >=20 && IMC < 25){
		printf("Peso normal");
	}
	else if (IMC >= 25 && IMC < 30){
		printf("Sobre peso");
	}
	else if (IMC >= 30 && IMC < 40){
		printf("Obeso");
	}
	else if (IMC >= 40){
		printf("Obeso morbido");
	}
	else
		printf("IMC invalido!!!");
}
