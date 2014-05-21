#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float altura, peso_ideal;
	
	printf("Digite sua Altura: ");
	scanf("%f", &altura);
	
	peso_ideal=(72.7*altura)-58;
	
	printf("Seu peso ideal eh: %.2f", peso_ideal);
	
	return 0;
}
