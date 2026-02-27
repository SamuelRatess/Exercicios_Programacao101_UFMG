#include <stdio.h>
#define TAM 14
// exercicio 2
int main() {
    
    int vet[TAM], j = -1;
    
    for(int i = 0; i < TAM; i++){
        scanf("%d ", &vet[i]);
    }
    
    int x;
    scanf("%d", &x);
    
    for(int i = 0; i < TAM; i++){
        if(vet[i] == x) {
            j = i;
            break;
        }
    }
    
    if(j == -1) {
        printf("Valor não encontrado\n");
    } else {
        printf("Posicao %d", j + 1);
    }
    
    return 0;
}
