#include <stdio.h>
#include <stdlib.h>

// Testar todos os antecessores do número digitado até chegar em 1.
// Se o número digitado dividido por cada um de seus antecessores for zero, esse antecessor é um dos divisores do número.
// Esse loop decresce ate o 1.

int main(){
    int num, aux, divisor;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if(num>0){
        divisor=num;
        printf("\n\nO numero %d tem os seguintes divisores:\n\n", num);
        do{
            aux=num % divisor;
            if(num%divisor==0){
                printf("%d, ", divisor);
            }
            divisor--;
        }while(divisor != 0);
    }

return 0;
}
