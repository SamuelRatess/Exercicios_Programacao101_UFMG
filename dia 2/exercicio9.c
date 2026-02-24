#include <stdio.h>

int main(){

    int x;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &x);

    for(int i = 1; i <= 20; i++){
        printf("%d x %d = %d\n", x, i, i*x);
    }

    return 0;
}