#include <stdio.h>
#define LINHAS 4
#define COLUNAS 5
// exercicio 4
int main(){
    
    int mat[LINHAS][COLUNAS];
    int n[9];
    
    for(int k = 0; k < 9; k++){
        n[k] = 0;
    }
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            switch(mat[i][j]){
            case 1:
                n[0]++;
                break;
            case 2:
                n[1]++;
                break;
            case 3:
                n[2]++;
                break;
            case 4:
                n[3]++;
                break;
            case 5:
                n[4]++;
                break;
            case 6:
                n[5]++;
                break;
            case 7:
                n[6]++;
                break;
            case 8:
                n[7]++;
                break;
            case 9:
                n[8]++;
                break;
            }
        }
    }
    
    for(int z = 0; z < 9; z++){
        if(n[z]){
            printf("%d aparece %d vezes em A\n", z + 1, n[z]);
        }
    }
    
    
    

    return 0;
}