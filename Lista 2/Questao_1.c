#include <stdio.h>
#include <math.h>
 
int main() {
	float num, quadrado;
	
	printf("Digite um numero real: ");
	scanf("%f", &num);
	
	quadrado = num*num;
 
	printf("\n%.2f elevado ao quadrado eh igual a: %.2f", num, quadrado);
 
	return 0;
}
