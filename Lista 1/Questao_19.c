#include <stdio.h>

int main() {
	float ganho_hora, horas_mes, sal_bruto, sal_liq, INSS, Sindicato, IR;
	
	printf("Quanto voce ganha por horas trabalhadas?");
	scanf("%f", &ganho_hora);
	printf("\nQuantas horas voce trabalhou neste mes?");
	scanf("%f", &horas_mes);
	
	sal_bruto=ganho_hora*horas_mes;
	INSS=(0.08*sal_bruto);
	Sindicato=(0.05*sal_bruto);
	IR=(0.11*sal_bruto);
	sal_liq=sal_bruto-INSS-Sindicato-IR;
	
	printf("\nSalario Bruto = R$%.2f", sal_bruto);
	printf("\nImposto de Renda = R$%.2f", IR);
	printf("\nINSS = R$%.2f", INSS);
	printf("\nSindicato = R$%.2f", Sindicato);
	printf("\nSalario Liquido = R$%.2f", sal_liq);
	
	return 0;
}
