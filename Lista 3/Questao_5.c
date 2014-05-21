#include <stdio.h>

int main() {
  int num, i, impar;
  
  printf("\nDigite um numero inteiro: ");
  scanf("%d", &num);
  i = 0;
  impar = 1; 
  
  printf("\nOs %d primeiros numeros naturais impares sao:\n", num);
  while (i < num) {
    printf ("%d\n", impar);
    impar = impar + 2;
    i++;
  }
  
  return 0;
}
