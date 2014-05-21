#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    i=1;

    for(i=1; i<=100; i++){      //Primeira estrutura de repetição com for. Contando de 1 até 100.
        if(i != 100)
            printf("%d - ", i);
        if(i==100)
            printf("%d.\n\n", i);
    }

    i=1;
    while(i<=100){
        if(i != 100)
            printf("%d - ", i);
        if(i==100)
            printf("%d.\n\n", i);
        i++;
    }

    i=1;
    do{
        if(i != 100)
            printf("%d - ", i);
        if(i==100)
            printf("%d.\n\n", i);
        i++;
    }while (i<=100);

    system("pause");
    return 0;
}
