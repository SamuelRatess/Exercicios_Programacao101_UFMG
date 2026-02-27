#include <stdio.h>
#include <string.h>
// exercicio 6
int main() {
 
    char palavra[20];
    scanf("%s", &palavra);
    
    for(int i = 0; i < 20; i++){
        if(palavra[i] == 'a' || palavra[i] == 'A' || palavra[i] == 'I' || palavra[i] == 'i' || palavra[i] == 'o' ||
        palavra[i] == 'O' || palavra[i] == 'u' || palavra[i] == 'U' || palavra[i] == 'e' || palavra[i] == 'E') {
            palavra[i] = '7'; 
        }
    }
    
    printf("%s\n", palavra);
    
    
    return 0;
}