#include <stdio.h>

int main() {
	float quantia;
	int dias;
	
	printf("Informe a quantidade de dias trabalhados: ");
	scanf("%d", &dias);
	quantia=30*dias;
	quantia=quantia-(0.08*quantia);
	printf("\nDevera ser pago, ja com o desconto, R$%.2f reais.", quantia);
	
	
	return 0;
}

