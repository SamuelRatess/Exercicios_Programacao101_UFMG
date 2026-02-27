#include <stdio.h>
#include <string.h>
// exercicio 4
int main() {
 
    char palavra1[20];
    char palavra2[20];
    int c = 1;
    scanf("%s %s", &palavra1, &palavra2);
    
    if(strcmp(palavra1, palavra2) == 0){
        printf("sim\n");
    } else {
        printf("nao\n");
    }
    
    
    return 0;
}