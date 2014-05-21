#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float Celsius, Farenheit;
	printf("Informe uma temperatura em Graus Farenheit:\n");
	scanf("%f", &Farenheit);
	Celsius=(5*(Farenheit-32)/9);
	printf("A temperatura %.2f graus Farenheit corresponde a %.2f graus Celsius.", Farenheit, Celsius);	//A notação %.2f imprime apenas dois valores após a virgula do número real e aproxima de acordo com os números restantes!
	

	return 0;
}
