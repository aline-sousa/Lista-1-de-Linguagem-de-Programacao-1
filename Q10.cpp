/* 10. Crie um programa que receba 2 valores e um operador aritm�tico b�sico (+ - * /) e apresente o resultado z
do c�lculo. Utilize switch case */

#include <stdio.h>

int oper;
float n1, n2, soma, sub, multi, div;

int main (){
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("\n-----Operador aritmetico----- \n1. + \n2. - \n3. * \n4. / \nDigite o numero do operador aritmetico: "); //apresenta as op��es dos operadores
	scanf("%d", &oper);
	
	switch (oper){
		case 1:
			soma = n1+n2;
			printf("%.2f + %.2f = %.2f", n1, n2, soma);
			break;
		case 2:
			sub = n1-n2;
			printf("%.2f - %.2f = %.2f", n1, n2, sub);
			break;
		case 3:
			multi = n1*n2;
			printf("%.2f * %.2f = %.2f", n1, n2, multi);
			break;
		case 4:
			div = n1/n2;
			printf("%.2f / %.2f = %.2f", n1, n2, div);
			break;
		default:
			printf("Operador aritmetico invalido!!!!! ");
	}
}
