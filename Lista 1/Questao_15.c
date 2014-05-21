#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
        int n1, n2, produto;
        float n3, soma, cubo;
        
        printf("Digite dois numeros inteiros e um numero real:\n");
        scanf("%d %d %f", &n1, &n2, &n3);
        produto=((n1*2)*(n2/2));
        printf("\nO produto do dobro do primeiro com metade do segundo eh igual a: %d", produto);
        soma=((n1*3)+n3);
        printf("\nA soma do triplo do primeiro com o terceiro eh igual a: %.2f", soma);
        cubo=n3*n3*n3;
        printf("\nO terceiro ao cubo eh igual a: %.2f", cubo);

        return 0;
}
