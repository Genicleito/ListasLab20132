#include <stdio.h>

int main(){
	float num;

	printf("Digite um numero: ");
	scanf("%f", &num);
	printf("\nO antecessor de %.0f eh: %.0f.", num, num-1);
	printf("\nO sucessor de %.0f eh: %.0f.", num, num+1);	
	
	return 0;
}	
