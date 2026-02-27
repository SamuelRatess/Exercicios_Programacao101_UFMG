#include <stdio.h>
 
int main() {
 
    int code, qtd;
    double price;
    
    scanf("%d %d", &code, &qtd);
    
    switch(code){
        case 1:
            price = 4 * qtd;
            break;
        case 2:
            price = 4.5 * qtd;
            break;
        case 3:
            price = 5 * qtd;
            break;
        case 4:
            price = 2 * qtd;
            break;
        case 5:
            price = 1.5 * qtd;
            break;
    }
    
        printf("Total: R$ %.2lf\n", price);
 
    return 0;
}