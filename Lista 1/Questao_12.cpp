#include <stdio.h>
#include <stdlib.h>

int main() {
	float ganho_hora, horas_mes, ganho_mes;
	printf("Quanto voce ganha por hora trabalhada?\n");
	scanf("%f", &ganho_hora);
	printf("Quantas horas voce trabalhou neste mes?\n");
	scanf("%f", &horas_mes);
	ganho_mes=ganho_hora*horas_mes;
	
	printf("\nVoce ganhou R$%.2f neste mes!", ganho_mes);

	return 0;
}
