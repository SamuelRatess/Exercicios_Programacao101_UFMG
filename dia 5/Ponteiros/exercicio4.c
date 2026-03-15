#include <stdio.h>

void troca(int *ptrA, int *ptrB){
    int temp= *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    troca(&a, &b);
    
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
