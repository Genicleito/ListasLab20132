#include <stdio.h>
#include <math.h>

int main() {
	float a, b, hip;
	
	a=5.0;
	b=7.0;
	
	hip=sqrt(pow(a, 2)+pow(b, 2));
	printf("A hipotenusa desse triangulo eh: %.2f.\n", hip);
	
	
	return 0;
}

