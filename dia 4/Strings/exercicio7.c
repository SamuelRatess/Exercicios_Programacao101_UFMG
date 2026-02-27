#include <stdio.h>
#include <string.h>
// exercicio 7
int main() {
 
    char palavra[20], letra;
    
    scanf("%s %c", &palavra, &letra);
    
    for(int i = 0; i < 20; i++){
        if(palavra[i] == 'a' || palavra[i] == 'A' || palavra[i] == 'I' || palavra[i] == 'i' || palavra[i] == 'o' ||
        palavra[i] == 'O' || palavra[i] == 'u' || palavra[i] == 'U' || palavra[i] == 'e' || palavra[i] == 'E') {
            palavra[i] = letra; 
        }
    }

    
    printf("%s\n", palavra);
    
    
    return 0;
}