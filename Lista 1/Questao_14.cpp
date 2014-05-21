#include <stdio.h>
#include <stdlib.h>

int main() {
	float C, F;
	printf("Informe a temperatura em graus Celsius: ");
	scanf("%f", &C);
	F=C*1.8+32;
	printf("\nA temperatura %.2f graus Celsius corresponde a %.2f graus Farenheit.", C, F);

	return 0;
}
