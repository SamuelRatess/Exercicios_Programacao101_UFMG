#include <stdio.h>

void verify(int *ptrA, int *ptrB, int *ptrMa, int *ptrMe){
    if(*ptrA > *ptrB){
        *ptrMa = *ptrA;
        *ptrMe = *ptrB;
    } else {
        *ptrMa = *ptrB;
        *ptrMe = *ptrA;
    }
}

int main() {
    
    int a, b, maior, menor;
    
    scanf("%d %d", &a, &b);
    
    verify(&a, &b, &maior, &menor);
    
    printf("%d\n", maior);
    printf("%d\n", menor);

    return 0;
}
