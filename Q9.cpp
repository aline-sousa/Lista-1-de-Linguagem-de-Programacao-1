/*9. Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, utilizando-se um automóvel 
que faz N Km por litro. Para obter o cálculo, o usuário deverá fornecer o tempo gasto e a velocidade média 
da viagem. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA <-- TEMPO * 
VELOCIDADE. Tendo o valor da distancia, basta calcular a quantidade de litros de combustível utilizada na 
viagem com a fórmula: LITROS_USADOS <-- DISTANCIA /N. O programa em C deverá apresentar os valores da 
distância percorrida e a quantidade de litros utilizados na viagem.   */

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
