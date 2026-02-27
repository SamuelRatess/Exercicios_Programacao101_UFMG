#include <stdio.h>
#include <string.h>
// exercicio 8
int main() {
 
    char palavra1[20], palavra2[20];
    int n;
    
    scanf("%s", &palavra1);
    scanf("%d", &n);
    scanf("%s", &palavra2);
    
    
    for(int i = 0; i < n; i++){
        printf("%s\n", palavra1);
    }

    printf("%s\n", palavra2);
    
    return 0;
}