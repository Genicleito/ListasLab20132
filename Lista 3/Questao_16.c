#include <stdio.h>

int main(){
    int a, b, fib, i, num, aux[31];
    unsigned long int soma;
    a = 0;
    b = 1;
    soma=0;

    num=32;     //32 é o maior termo da sequência de Fibonnaci que não ultrapassa o valor de 4 milhões [Possui o valor: 3524578]

    printf("A serie de Fibonnaci cujo valor nao ultrapassa 4 milhoes eh:\n\n");
    for(i = 1; i <= num; i++){
        fib = a + b;
        a = b;
        b = fib;

        if (i%2==0){            //Caso o termo seja par (dividido por 2 com resto zero), efetuará a soma.
            soma=soma+fib;      //Aqui são somados os termos pares da serie de Fibonacci.
        }

        printf("%d . ", fib);
    }

    printf("\n\nA soma dos termos pares da Sequencia de Fibonacci eh: %lu.", soma);

    printf("\n");

    return 0;
}
