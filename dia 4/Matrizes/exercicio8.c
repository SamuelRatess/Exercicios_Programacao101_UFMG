#include <stdio.h>
// exercicio 8
int main(){
    
    int LINHAS;
        
    scanf("%d", &LINHAS);
    
    int mat[LINHAS][LINHAS], soma = 0;
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < LINHAS; j++){
            scanf("%d", &mat[i][j]);
            if(i > j){
                soma += mat[i][j];
            }
        }
    }
    
    printf("\n%d\n", soma);
    
    
    
    return 0;
}