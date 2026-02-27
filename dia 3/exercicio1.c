#include <stdio.h>
#define TAM 10
// exercicio 1
int main() {
    
    int vet[TAM];
    int j = 1;
    for(int i = 0; i < TAM; i++){
        vet[i] = j;
        j+=2;
    }
    
    for(int i = 0; i < TAM; i++){
        printf("%d ", vet[i]);
    }
    
    return 0;
}
