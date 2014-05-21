#include <stdio.h>

int main(){
    int i;
    i=10;

    while(i>=0){
        if (i==0){
            printf("%d.", i);
            printf(" FIM!\n");
        }else{
            printf("%d, ", i);
        }
    i--;
    }

return 0;
}
