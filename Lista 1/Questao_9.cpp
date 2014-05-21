#include <stdio.h>
#include <stdlib.h>

int main() {
	float metro, centimetro;
	printf("Digite uma medida em metros: ");
	scanf("%f", &metro);
	centimetro=metro*100;
	printf("\n%.2f metros corresponde a %.2f centimetros!", metro, centimetro);

	return 0;
}
