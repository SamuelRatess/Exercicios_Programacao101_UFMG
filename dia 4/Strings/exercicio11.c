#include <stdio.h>
#include <string.h>
// exercicio 11
int main() {
    
    char palavra[50];

    scanf("%s", palavra);
    
    int j = strlen(palavra);
    int verify = 1;

    for(int i = 0; i < 50; i++){
        if(palavra[i] != palavra[j-1-i]){
            verify = 0;
            break;
        }
    }
    
    if(verify){
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}