#include <stdio.h>
#define LINHAS 5
#define COLUNAS 5
// exercicio 7
int main(){
    
    int mat[LINHAS][COLUNAS];
    int l4 = 0, col2 = 0, princ = 0, secu = 0, soma = 0;
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            scanf("%d", &mat[i][j]);
            soma += mat[i][j];
        }
    }
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            if(i == 3){
                l4 += mat[i][j];
            }
            if(j == 1){
                col2 += mat[i][j];
            }
            if(i == j){
                princ += mat[i][j];
            }
            if(i + 2 + j == 6){
                secu += mat[i][j];
            }
        }
    }
    
    printf("%d\n", l4);
    printf("%d\n", col2);
    printf("%d\n", princ);
    printf("%d\n", secu);
    printf("%d\n", soma);
    
    return 0;
}