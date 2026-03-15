#include <stdio.h>

void dobro(int *ptrA, int *ptrB){
    *ptrA = *ptrA * 2;
    *ptrB = *ptrB * 2;
}

int main() {
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    dobro(&a, &b);
    
    printf("SOMA DO DOBRO = %d", a + b);

    return 0;
}
