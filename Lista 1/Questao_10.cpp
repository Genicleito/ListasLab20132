#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float PI, raio, area;
	PI=3.141592;
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	area=PI*(pow(raio,2));
	printf("A area desse circulo corresponde a: %.2f", area);	

	return 0;
}
