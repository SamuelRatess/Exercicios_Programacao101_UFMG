#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main()
{
    double a[LINHAS][COLUNAS];
    
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            scanf("%lf", &a[i][j]);
        }
    }
    
    double *ptrA = &a[0][0];

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            printf("elemento[%d][%d]: %p\n", i, j, ptrA);
            ptrA++;
        }
    }
    
    return 0;
}