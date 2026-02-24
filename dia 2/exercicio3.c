#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, count = 0;
    
    printf("Digite os 5 numeros: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    if(n1 % 2){
        count++;
    }
    if(n2 % 2){
        count++;
    }
    if(n3 % 2){
        count++;
    }
    if(n4 % 2){
        count++;
    }
    if(n5 % 2){
        count++;
    }
    
    printf("Quantos sao impar: %d", count);
    
    return 0;
}
