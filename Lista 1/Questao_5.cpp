#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char nome1[15], nome2[15];
	printf("Digite um nome com 15 letras: ");
	gets(nome1);
	printf("\nDigite outro nome com 15 letras: ");
	gets(nome2);
	printf("\nVoce digitou os nomes:\t %s e %s ", nome1, nome2);
	printf("\nA segunda letra de cada palavra eh, respectivamente: %c %c", nome1[1], nome2[1]);

	
	return 0;
}
