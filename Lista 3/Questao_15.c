#include <stdio.h>

int main(){
    int i=3, soma=0;

	while(i<=1000){
		if((i%3==0)||(i%5==0)){
			soma+=i;
		}
	i++;
	}
	printf("\nSoma de todos os numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5:\n");
    printf("Soma = %d.\n\n", soma);
    
    
system("pause");
return 0;
}
