#include <stdio.h>
#include <stdlib.h>

int main(){
    int  i;
    char str[20], str2[20];

    printf("Digite uma string binaria de 20 posicoes: ");
    gets(str);

    i=0;
    while(i<=9){
        if(str[i] == '0'){
            str2[i]='1';
        }else{
            str2[i]=str[i];
        }
        i++;
    }
    printf("\n\n--Invertendo os ZEROS da string...--\n");
    printf("\nAnterior: --%s\nAgora: -----%s\n\n", str, str2);

system("pause");
return 0;
}
