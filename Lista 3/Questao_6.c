#include <stdio.h>

int main(){
    int soma, numpar, i;

    soma=0;
    numpar=0;

    for(i=1; i<=50; i++){
        numpar=numpar+2;
        soma=soma+numpar;
        printf("%d. %d + %d = %d\n", i, (soma-numpar), numpar, soma);
    }
    printf("\n==> A soma eh: %d\n", soma);

    return 0;
}
