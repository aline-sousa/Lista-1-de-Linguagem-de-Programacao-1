/*9. Efetuar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem, utilizando-se um autom�vel 
que faz N Km por litro. Para obter o c�lculo, o usu�rio dever� fornecer o tempo gasto e a velocidade m�dia 
da viagem. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA <-- TEMPO * 
VELOCIDADE. Tendo o valor da distancia, basta calcular a quantidade de litros de combust�vel utilizada na 
viagem com a f�rmula: LITROS_USADOS <-- DISTANCIA /N. O programa em C dever� apresentar os valores da 
dist�ncia percorrida e a quantidade de litros utilizados na viagem.   */

#include <stdio.h>

float  N, tempo, velocidade, distancia, litros_usados; //N = Km/litro da viagem

int main (){
	printf("Digite a quantidade de km/litro da viagem: ");
	scanf("%f", &N);
	printf("Digite o tempo gasto na viagem (em horas): ");
	scanf("%f", &tempo);
	printf("Digite a velocidade media da viagem (Km/h): ");
	scanf("%f", &velocidade);
	
	distancia = tempo * velocidade;  // formula da distancia
	litros_usados = distancia / N;  // formula para calcular os litros gastos
	
	printf("A distancia percorrida: %.2f \nQuantidade de litros utilizados na viagem: %.2f", distancia, litros_usados);
	
}
