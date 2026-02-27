#include <stdio.h>
 
int main() {
 
    int a, b, c, d, dife;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    dife = a * b - c * d;
    
    printf("DIFERENCA = %d\n", dife);
    
    return 0;
}