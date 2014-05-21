#include <stdio.h>
#include <math.h>

int main(){
	float salario, novo_salario;
	
	printf("\nDigite o salario do funcionario: ");
	scanf("%f", &salario);
	novo_salario=salario+(0.25*salario);
	printf("\nCom o aumento de 25 porcento o novo salario eh: R$%.2f", novo_salario);
	
	return 0;
}	
