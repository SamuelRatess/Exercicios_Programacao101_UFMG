#include <stdio.h>

void dobro(int *ptrr){
    *ptrr *= 2;
}

int main()
{
    int a[5];
    int *ptrA = &a[0];
    
    for(int i = 0; i < 5; i++){
        scanf("%d", ptrA);
        dobro(ptrA);
        ptrA++;
    }
    
    ptrA = &a[0];

    for(int i = 0; i < 5; i++){
        printf("Elemento %d: %d\n", i+1, *ptrA);
        ptrA++;
    }
    
    return 0;
}