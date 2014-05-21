#include <stdio.h>

int main(){
    int num, soma=0, qtd=0, maior, menor, qtd_pares=0, soma_pares=0, qtd_impares=0;

    do{
        printf("\nDigite um Numero: ");
        scanf("%d", &num);
        qtd++;
        soma += num;
        if (num%2 == 0) {
            qtd_pares++;
            soma_pares += num;
        }else{
            qtd_impares++;
        }
        if (qtd == 1)
            maior = menor = num;
        else{
            if(maior < num)
                maior = num;
            if (menor > num)
                menor = num;
        }
        printf("\nDeseja Digitar Outro Numero? \nCaso nao queira prosseguir, digite apenas 0(zero):\n");

    } while(num != 0);

    printf("\n\n(a) A soma dos numeros digitados: %d\n", soma);
    printf("(b) A quantidade dos numeros digitados: %d\n", qtd);
    printf("(c) A media dos numeros digitados: %.2f\n", (float)soma/qtd);
    printf("(d) O maior numero digitado: %d\n", maior);
    printf("(e) O menor numero digitado: %d\n", menor);
    printf("(f) A media dos numeros pares: %.2f\n", (float)soma_pares/qtd_pares);

return 0;
}
