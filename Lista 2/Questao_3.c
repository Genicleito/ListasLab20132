#include <stdio.h>
#include <math.h>

int main(){
	float num1, num2, num3;

	printf("Digite tres numeros:\n");
	scanf("%f %f %f", &num1, &num2, &num3);
	printf("\nO resultado final da soma dos quadrados desses numeros eh igual a: %.2f", (num1*num1)+(num2*num2)+ (num3*num3));
	
	return 0;
}	
