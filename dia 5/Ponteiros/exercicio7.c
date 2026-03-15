#include <stdio.h>

void soma(int *ptrA, int *ptrB){
    *ptrA = *ptrA + *ptrB;
    
}

int main() {
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    soma(&a, &b);
    
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
