#include <stdio.h>

int main(){

    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    //a, b e c
    if(a == b || b == c || c == a) {
        printf("Sim\n");
        if(a < b && a < c) {
            printf("%d\n", a);
        } else if(b < c) {
            printf("%d\n", b);
        } else {
            printf("%d\n", c);
        }
    } else {
        printf("Nao\n");
        if(a > b && a > c) {
            printf("%d\n", a);
        } else if(b > c) {
            printf("%d\n", b);
        } else {
            printf("%d\n", c);
        }
    }

    //d
    int aux1 = 0;
    if(!(a % 2)) {
        printf("%d ", a);
        aux1++;
    }
    if(!(b % 2)) {
        printf("%d ", b);
        aux1++;
    }
    if(!(c % 2)) {
        printf("%d ", c);
        aux1++;
    }
    if(aux1) {
        printf("\n");
    }

    //e
    int aux2 = 0;
    if(a % 2) {
        printf("%d ", a);
        aux2++;
    }
    if(b % 2) {
        printf("%d ", b);
        aux2++;
    }
    if(c % 2) {
        printf("%d ", c);
        aux2++;
    }
    if(aux2){
        printf("\n");
    }
    
    //f
    int aux3 = 0;
    if(a > 0) {
        printf("%d ", a);
        aux3++;
    }
    if(b > 0) {
        printf("%d ", b);
        aux3++;
    }
    if(c > 0) {
        printf("%d ", c);
        aux3++;
    }
    if(aux3){
        printf("\n");
    }
    
    //g
    int aux4 = 0;
    if(a < 0) {
        printf("%d ", a);
        aux4++;
    }
    if(b < 0) {
        printf("%d ", b);
        aux4++;
    }
    if(c < 0) {
        printf("%d ", c);
        aux4++;
    }
    if(aux4){
        printf("\n");
    }

    return 0;
}