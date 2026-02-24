#include <stdio.h>
// exercicio 1
int main(){

    int a, b;

    printf("Digite o valor de X: ");
    scanf("%d", &a);
    printf("Digite o valor de Y: ");
    scanf("%d", &b);

    //a
    if(a == b) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    //b
    int c = a * b;
    if(c < 100) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    //c
    int d = 3 * a;
    if(d > b) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    //d
    if(a > 0 || b > 0) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    //e
    if(a < 0 && b < 0) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    //f
    if(a % 2 || b % 2) {
        printf("Sim\n");
    } else {
        printf("Nao\n");
    }

    //g
    if(a < b) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }

    return 0;
}
