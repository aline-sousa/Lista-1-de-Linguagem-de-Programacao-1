/* 5. Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre:
? O n�mero digitado ao quadrado � A raiz quadrada do n�mero digitado */


#include <stdio.h>
#include <math.h>

int n,  quadrado; //n = numero escolhido, quadrado = o numero elevado ao quadrado
float raiz;

int main() {
	
	printf ("Digite um numero: ");
	scanf("%d", &n);
	
	if (n >= 0) {
		quadrado = n * n ; //calulo para tirar o quadrado do numero
		raiz = sqrt(n); // calculo para tirar a raiz do numero escolhido
		printf("Ao quadrado: %d", quadrado);
		printf("\nRaiz quadrada: %.2f", raiz);
	}else {
		printf("Numero negativo!");  //caso o  numero seja negativo
				
		}
}
	
