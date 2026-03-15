#include <stdio.h>

int main() {
    int a = 10;
    double b = 3.14;
    char c = 'A';

    int *ptrI = &a;
    double *ptrR = &b;
    char *ptrC = &c;

    printf("Valor de a: %d\n", *ptrI);
    printf("Valor de b: %lf\n", *ptrR);
    printf("Valor de c: %c\n", *ptrC);

    *ptrI = 20;
    *ptrR = 6.28;
    *ptrC = 'B';

    printf("Valor de a: %d\n", *ptrI);
    printf("Valor de b: %lf\n", *ptrR);
    printf("Valor de c: %c\n", *ptrC);

    return 0;
}