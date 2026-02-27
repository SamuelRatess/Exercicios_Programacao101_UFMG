#include <stdio.h>
#define TAM 10
// exercicio 8
int main() {
    
    int vet[TAM],count = 0, soma = 0;
    
    for(int i = 0; i < TAM; i++){
        scanf("%d", &vet[i]);
        if(vet[i] < 0){
            count++;
        }
        if(vet[i] > 0){
            soma += vet[i];
        }
    }
    
    printf("%d\n", count);
    printf("%d\n", soma);
    
    return 0;
}
