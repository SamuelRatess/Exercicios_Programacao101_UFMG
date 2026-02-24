#include <stdio.h>

int main(){

    int x;

    printf("Escreva o numero que Pedro esta pensando: ");
    scanf("%d", &x);

    while(x != 5){
        printf("O numero digitado esta incorreto!\n");
        printf("Escreva outros numero: ");
        scanf("%d", &x);
    }

    return 0;
}