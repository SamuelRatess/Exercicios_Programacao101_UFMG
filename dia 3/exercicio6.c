#include <stdio.h>
#define TAM 10
// exercicio 6
int main() {
    
    int vet[TAM], j, maior;
    
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
    }
    
    for(int i = 0; i < TAM; i++){
        printf("%d ", vet[i]);
    }
    
    maior = vet[0];
    
    for(int i = 0; i < TAM; i++){
        if(maior < vet[i]){
            maior = vet[i];
            j = i;
        }
    }
    
    printf("\n%d\n", maior);
    printf("%d\n", j + 1);
    
    return 0;
}
