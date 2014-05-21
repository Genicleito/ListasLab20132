#include <stdio.h>

int main (){

	int i,multiplo;
	multiplo=0;
	i=1;
	printf ("\nOs cinco primeiros multiplos de 3 sao:");
	while ((i>0) && (multiplo != 5)){
		if (i%3==0){
			printf("\n%d", i);
			multiplo++;
		}
		i++;
	}
}
