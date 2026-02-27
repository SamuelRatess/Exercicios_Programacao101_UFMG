#include <stdio.h>
#define TAM 10
// exercicio 7
int main() {
    
    double vet[TAM], soma = 0;
    
    for(int i = 0; i < TAM; i++){
        scanf("%lf", &vet[i]);
        soma += vet[i];
    }
    
    printf("%.2lf\n", soma / TAM);
    
    return 0;
}
