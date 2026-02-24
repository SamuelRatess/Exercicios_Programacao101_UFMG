#include <stdio.h>

int main(){

    int x, fatorial = 1;

    printf("Escreva um numero: ");
    scanf("%d", &x);
    
    for(int i = 1; i <= x; i++){
        fatorial *= i;
    }
    
    printf("Fatorial = %d", fatorial);

    return 0;
}