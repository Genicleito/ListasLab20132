#include <stdio.h>

int main(){
	char c;
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("Posicao na Tabela ASCII: %d \nCaractere Correspondente: %c", num, num);
	
	return 0;	
}




/*#include <stdio.h>
#include <stdlib.h>

int main () {
   char c;
   int i;
   printf("Usando char\n");
   for (c = 32; c < 127; c++)
      printf("Pos %d: char %c \t", c, c);  

   printf("\n\nUsando int\n");
   for (i = 32; i < 127; i++)
      printf("Pos %d: char %c \t", i, i);  

   system ("pause");
   return 0;
} */
