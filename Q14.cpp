/*  14. Construa um programa em C para determinar se o indivíduo está com um peso favorável. Essa situação é 
determinada através do IMC (Índice de Massa Corpórea), que é definida como sendo a relação entre o peso 
(PESO) e o quadrado da Altura (ALTURA) do indivíduo. Ou seja, IMC = PESO / ALTURA ²   e, a situação do peso é determinada pela tabela abaixo:  */

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
