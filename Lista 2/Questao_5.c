#include <stdio.h>

int main() {
	float total, ganhador1, ganhador2, ganhador3;
	
	ganhador1=(0.46*780000);
	ganhador2=(0.32*780000);
	ganhador3=780000-(ganhador1+ganhador2);
	
	printf("O primeiro ganhador ganhou: RS%.2f", ganhador1);
	printf("\nO segundo ganhador ganhou RS%.2f", ganhador2);
	printf("\nO terceiro ganhador ganhou RS%.2f", ganhador3);
	
	return 0;
}
