#include <stdio.h>
#define LINHAS 5
#define COLUNAS 3
// exercicio 3
int main() {
    
    double mat[LINHAS][COLUNAS];
    int x = 0, y = 0, z = 0;
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            scanf("%lf", &mat[i][j]);
        }
    }
    
    for(int i = 0; i < LINHAS; i++){
        if(mat[i][0] < mat[i][1] && mat[i][0] < mat[i][2]){
            x++;
        } else if(mat[i][1] < mat[i][2]){
            y++;
        } else {
            z++;
        }
    }
    
    printf("Prova 1: %d aluno(s)\n", x);
    printf("Prova 2: %d aluno(s)\n", y);
    printf("Prova 3: %d aluno(s)\n", z);

    return 0;
}