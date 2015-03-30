/* Programa Codificador do Código de César */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CodCesar(char* string){    //Função que irá aplicar o Código de César.
    int i=0, tam=0;
    tam = strlen(string);

    for(i=0; i<tam; i++){
        string[i]=string[i]+3; //3 é a chave, o número de posições.
    }
    printf("\nPalavra Codificada:\t%s\n", string);
}

int main(){
    printf("\t-- Programa Codificador do Codigo de Cesar --\n\tPor: Genicleito Goncalves\n\n");
    char str[255];
    printf("Digite uma palavra:\n");
    scanf("%s", str);
    CodCesar(str);

    return 0;
}
