#include <stdio.h>
#define TAM 10
// exercicio 5
int main() {
    
    int vet[TAM];
    
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
    }
    
    int maior = vet[0];
    int menor = vet[0];
    
    for(int i = 0; i < TAM; i++){
        if(maior < vet[i]){
            maior = vet[i];
        }
        if(menor > vet[i]){
            menor = vet[i];
        }
    }
    
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    
    return 0;
}
