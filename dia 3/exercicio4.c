#include <stdio.h>
#define TAM 8
// exercicio 4
int main() {
    
    int vet[TAM], soma = 0;
    
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
        if(vet[i] < 0){
            vet[i] = 0;
        }
    }
    
    for(int i = 0; i < TAM; i++){
        printf("%d ", vet[i]);
    }
    
    return 0;
}
