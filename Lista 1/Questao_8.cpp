#include <stdio.h>
#include <stdlib.h>

int main() {
	float nota1, nota2, nota3, nota4, media;
	
	printf("Digite quatro notas:\n");
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
	media=(nota1+nota2+nota3+nota4)/4;
	printf("\nA media dos numeros digitados eh igual a %.2f: ", media);

	return 0;
}
