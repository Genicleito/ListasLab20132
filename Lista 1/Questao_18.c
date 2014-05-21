#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float peso, excesso, multa;
	excesso=0;
	multa=0;
	
	printf("Senhor, informe o peso do peixe: ");
	scanf("%f", &peso);
	
	if(peso>50){
		excesso=(peso-50);
		multa=excesso*4;
		printf("\nSenhor Joao, voce ira pagar R$%.2f de multa!", multa);
	}else{
		printf("\nSenhor Joao, voce nao pagara multa por excesso! Parabens!");
		printf("\n Excesso: %.2f \n Multa: %.2f", excesso, multa);
	}
	
	
    return 0;
}
