/*4. Faça um programa para calcular a área de um cilindro dada sua formula. A = 2. pi. r .(r + h)*/

#include <stdio.h>

float pi =3.14 , r, h, A; // 3.14 = valor de PI, r = raio, h = altura, A= Area

int main() {
	 
	 
	 printf ("Digite o raio: ");
	 scanf ("%f", &r);
	 
	 printf("Digite a altura: ");
	 scanf("%f", &h);
	 
	 A = 2 * pi * r * (r + h); //calculo da area
	 
	 printf("A area do cilindro: %.2f", A);
}







