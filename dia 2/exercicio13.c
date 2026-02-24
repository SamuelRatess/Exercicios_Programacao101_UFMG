#include <stdio.h>

int main(){

    int n, countB = 0, countA = 0, a, b;
    
    printf("Quantos casos vao ser digitados? ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if(a > b){
            countA++;
        } 
        if(a < b){
            countB++;
        } 
    }
    
    printf("Ana: %d\n", countA);
    printf("Beatriz: %d\n", countB);

    return 0;
}