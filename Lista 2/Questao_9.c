#include <stdio.h>

int main() {
	float salario, prestacao;
	
	printf("Qual o seu salario?\n");
	scanf("%f", &salario);
	
	printf("Qual o valor da parcela que voce deseja pagar?\n");
	scanf("%f", &prestacao);
	
	if(prestacao > 0.2*salario){
		printf("\nEmprestimo nao concedido!");
	}else{
		printf("\nEmprestimo Concedido!");
	}
	
	return 0;
}

