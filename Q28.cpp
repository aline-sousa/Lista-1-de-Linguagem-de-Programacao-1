/*28. Idades
Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um, a idade de um indiv�duo. O 
�ltimo dado, que n�o entrar� nos c�lculos, cont�m o valor de idade negativa. Calcular e imprimir a idade m�dia 
deste grupo de indiv�duos.
Entrada: A entrada cont�m um n�mero indeterminado de inteiros. A entrada ser� encerrada quando um valor 
negativo for lido.
Sa�da: A sa�da cont�m um valor correspondente � m�dia de idade dos indiv�duos. A m�dia deve ser impressa 
com dois d�gitos ap�s o ponto decimal.    */

#include <stdio.h>

int main () {
	int idade, count=0;// count = ir� ler a quantidade inderterminada de dados at� o break (numero negativo)
	float soma=0, media;
	
	do{
		printf("Entre com uma idade: ");
		scanf("%d", &idade);
		if(idade >=0){
			soma+=idade; 
			count++;
		}
	} while (idade>=0);
	
	media = soma /count; 
	printf("Media: %.2f", media);
}




