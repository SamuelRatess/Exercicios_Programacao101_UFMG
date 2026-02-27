#include <stdio.h>
 
int main() {
 
    int n1, n2, n3, maior;
    
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if(n1 > n2 && n1 > n3){
        maior = n1;
    } else if(n2 > n3) {
        maior = n2;
    } else {
        maior = n3;
    }
    
    printf("%d eh o maior\n", maior);
 
    return 0;
}