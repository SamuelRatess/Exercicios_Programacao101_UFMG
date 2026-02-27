#include <stdio.h>
#define LINHAS 5
#define COLUNAS 6
// exercicio 6
int main(){
    
    int mat[LINHAS][COLUNAS], k = 0;
    double soma = 0;
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            scanf("%d", &mat[i][j]);
            if(!(mat[i][j] % 2)){
                soma += mat[i][j];
                k++;
            }
        }
    }
    
    printf("\n");
    double media = soma / k;
    printf("%.2lf\n", media);

    return 0;
}