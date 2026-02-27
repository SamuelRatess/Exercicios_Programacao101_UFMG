#include <stdio.h>
#include <string.h>
// exercicio 10
int main() {
    
    char palavra1[50];
    char palavra2[50];

    scanf("%s %s", palavra1, palavra2);

    if (strstr(palavra1, palavra2) != NULL) {
        printf("A palavra %s eh substring da palavra %s\n", palavra2, palavra1);
    } 
    else if (strstr(palavra2, palavra1) != NULL) {
        printf("A palavra %s eh substring da palavra %s\n", palavra1, palavra2);
    } 
    else {
        printf("Nenhuma das duas strings eh substring da outra.\n");
    }

    return 0;
}