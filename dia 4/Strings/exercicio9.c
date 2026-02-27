#include <stdio.h>
#include <ctype.h>
// exercicio 9

int main() {
    
    char palavra[20];
    char palavraNova[20];
    
    scanf("%s", palavra);
    
    for(int i = 0; i < 20; i++){
        if(islower(palavra[i])){
            palavraNova[i] = toupper(palavra[i]);
        } else {
            palavraNova[i] = tolower(palavra[i]);
        }
    }
    
    printf("%s\n", palavraNova);

    return 0;
}