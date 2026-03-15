#include <stdio.h>

int main()
{
    double a[10];
    
    for(int i = 0; i < 10; i++){
        scanf("%lf", &a[i]);
    }
    
    double *ptrA = &a[0];
    
    for(int i = 0; i < 10; i++){
        printf("%d elemento: %p\n", i+1, ptrA);
        ptrA++;
    }
    
    return 0;
}