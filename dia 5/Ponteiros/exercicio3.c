#include <stdio.h>

int main() {
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    int *ptrA = &a;
    int *ptrB = &b;
    
    if(ptrA > ptrB){
        printf("Maior ponteiro: %p\n", ptrA);
        printf("Maior ponteiro: %p\n", ptrB);
    } else {
        printf("Maior ponteiro: %p\n", ptrB);
        printf("Menor ponteiro: %p\n", ptrA);
    }

    return 0;
}
