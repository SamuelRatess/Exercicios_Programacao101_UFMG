#include <stdio.h>
#define TAM 5
// exercicio 1
int main() {
    
    int mat[TAM][TAM];
    
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            if(i == j){
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;
            }
        }
    }
    
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}