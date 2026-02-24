#include <stdio.h>
#include <math.h>

int main(){

    int a, b, r = 1;
    
    printf("Digite os dois numeros: ");
    scanf("%d %d", &a, &b);
    
    if(b > a){
        int aux = b;
        b = a;
        a = aux;
    }
    
    while(r != 0){
        r = a % b;
        a = b;
        b = r;
    }
    
    printf("O MDC eh %d", a);
    
    return 0;
}