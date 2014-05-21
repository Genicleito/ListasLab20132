#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float lado, area;
	printf("Digite o valor do lado de um quadrado: ");
	scanf("%f", &lado);
	area=pow(lado,2);
	area=area*2;
	printf("O dobro da area desse quadrado de lado %.2f eh igual a: %.2f", lado, area);

	return 0;
}
