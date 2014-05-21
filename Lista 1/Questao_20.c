#include <stdio.h>

int main(void) {
	float tamanho, velocidade, tempo;
	
	printf("Digite o tamanho do arquivo em MB: ");
	scanf("%f", &tamanho);
	printf("\nDigite a velocidade de um link da internet: ");
	scanf("%f", &velocidade);
	tempo=tamanho/(velocidade*60);
	
	printf("\nSerao gastos %.2f minutos neste download!", tempo);

	
	return 0;
}
