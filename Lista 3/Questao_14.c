#include <stdio.h>

int main(){
    int num, i, j, soma;
    soma=0;
    i=1;

    printf("::Voce sera solicitado a digitar 10 numeros::\n\n");
    while(i <= 10){
        printf("Digite um numero!\n");
        scanf("%d", &num);
        soma+=num;
        i++;
    }
    

    printf("\nA soma dos numeros digitados eh igual a: %d\n", soma);

system("pause");
return 0;
}
