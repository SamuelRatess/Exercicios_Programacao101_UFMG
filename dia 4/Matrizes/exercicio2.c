#include <stdio.h>
#define TAM 3
// exercicio 2
int main() {
    
    double mat[TAM][TAM], soma = 0;
    
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            scanf("%lf", &mat[i][j]);
        }
    }
    
    for(int i = 0; i < TAM; i++){
        soma += mat[i][i];
    }
    
    printf("SOMA = %.2lf\n", soma);

    return 0;
}