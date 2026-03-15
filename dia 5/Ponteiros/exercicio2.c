#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    int *ptrIA = &a;
    int *ptrIB = &b;

    if(ptrIB > ptrIA){
        printf("%p", ptrIB);
    } else {
        printf("%p", ptrIA);
    }
    
    return 0;
}