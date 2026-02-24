#include <stdio.h>

int main(){

    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    
    while(n1 == n2 && n1 == n3) {
        printf("Tente novamente!\n");
        scanf("%d %d %d", &n1, &n2, &n3);
    }
    if(n1 == n2) {
        printf("Jogador 3");
    } else if (n2 == n3) {
        printf("Jogador 1");
    } else {
        printf("Jogador 2");
    }

    return 0;
}