/*26. Freitas tem 1,50m e cresce 1 centímetros por ano, enquanto Russo tem 1,40m e cresce 2 centímetros por 
ano. Construir um programa que calcule iterativamente e imprima quantos anos serão necessários para que 
Russo seja maior que Freitas, considerando que ambos nunca param de crescer    */

#include <stdio.h>

int main(){
	int p1 = 150, p2 = 140 , ano=0;
	
	while(p2<=p1){
		p1+=1;
		p2+=2;
		ano++;
		printf("No ano %d P1 tem %d cm e P2 tem %d cm\n", ano, p1, p2);
		
	} // fim while
	
	printf("Demorou %d anos para a pessoa 2 passar a pessoa 1",ano);
	
	return 0;
}
