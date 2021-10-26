/*28. Idades
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O 
último dado, que não entrará nos cálculos, contém o valor de idade negativa. Calcular e imprimir a idade média 
deste grupo de indivíduos.
Entrada: A entrada contém um número indeterminado de inteiros. A entrada será encerrada quando um valor 
negativo for lido.
Saída: A saída contém um valor correspondente à média de idade dos indivíduos. A média deve ser impressa 
com dois dígitos após o ponto decimal.    */

#include <stdio.h>

int main () {
	int idade, count=0;// count = irá ler a quantidade inderterminada de dados até o break (numero negativo)
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




