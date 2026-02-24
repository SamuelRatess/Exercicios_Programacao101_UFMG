#include <stdio.h>

int main()
{
    int n, j = 1, c = 1;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    for(int k = 0; k < n; k++){
       for(int i = 0; i < j; i++){
            printf("%d ", c);
            c++;
        }
        printf("\n");
        j++;
    }
    

    return 0;
}
