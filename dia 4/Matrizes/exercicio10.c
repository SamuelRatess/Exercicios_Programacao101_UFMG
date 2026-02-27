#include <stdio.h>
// exercicio 10
int main(){
    
    int LINHAS;
        
    scanf("%d", &LINHAS);
    
    int mat[LINHAS][LINHAS], soma = 0;
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < LINHAS; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < LINHAS; j++){
            if(i != 0 && j != 0 && i != LINHAS - 1 && j != LINHAS - 1) {
                soma += mat[i][j];
            }
        }
    }
    
    printf("\n%d\n", soma);
    
    
    
    return 0;
}