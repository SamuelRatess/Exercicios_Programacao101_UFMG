#include <stdio.h>
#define TAM 12
// exercicio 3
int main() {
    
    int vet[TAM], soma = 0;
    
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
        if(!(vet[i] % 2)){
            soma++;
        }
    }
    
    printf("%d valores pares\n", soma);
    
    for(int i = 0; i < TAM; i++){
        if(!(vet[i] % 2)){
            printf("%d ", vet[i]);
        }
    }
    
    return 0;
}
