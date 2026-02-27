#include <stdio.h>
#include <string.h>
// exercicio 3
int main() {
 
    char palavra[20];
    
    scanf("%s", &palavra);
    
    for(int i = 0; i < 20; i++){
        if(palavra[i] == 'p'){
            break;
        }
        printf("%c", palavra[i]);
    }
    
    return 0;
}