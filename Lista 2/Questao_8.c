#include <stdio.h>
#include <math.h>

int main() {
	int num, num_inv, i, aux, algarismos;
	
	printf("Digite um numero inteiro de 3 digitos: ");
	scanf("%d", &num);

	aux=num;
	num_inv=0;
	
	while(aux > 0){
		num_inv = num_inv * 10;
		num_inv = num_inv + (aux % 10);
		aux = aux /10;
	}
		
		printf("\nSegue como ficou o numero invertido: ");
		printf("%d - %d", num, num_inv);
		
	
	
	return 0;
}

