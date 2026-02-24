#include <stdio.h>
#include <math.h>

int main(){

    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        int aux = sqrt(i);
        if((int)aux == sqrt(i)){
            printf("%d ", i);
        }
    }
    
    return 0;
}