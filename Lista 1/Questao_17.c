#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float altura, peso_ideal;
	char sexo[1];
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("\nDigite Seu Sexo: ");
	scanf("%f", &sexo[1]);

	if(sexo[1]=='M') {
		peso_ideal=(72.7*altura)-58;
	}else if(sexo[1]=='F'){
		peso_ideal=(62.1*altura)-44.7;
	}else{
		printf("\nSexo invalido!");
	}
	
	printf("\nSeu peso ideal eh: %.2f", peso_ideal);

    return 0;
}

