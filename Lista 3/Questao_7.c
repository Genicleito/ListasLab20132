#include <stdio.h>

int main(){
    int num, i;
    i=2;

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    for(i=2; i<=num-1; i++){
        if (num%i == 0){
            printf("o numero %d nao eh primo!", num);
            break;
        }
    }
    if (i==num)
        printf("O numero %d eh primo!", num);


return 0;
}
