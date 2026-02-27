#include <stdio.h>
#define LINHAS 5
#define COLUNAS 5
// exercicio 5
int main(){
    
    int mat[LINHAS][COLUNAS];
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            scanf("%d", &mat[i][j]);
            if(mat[i][j] < 0){
                mat[i][j] = 0;
            }
        }
    }
    
    printf("\n");
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}