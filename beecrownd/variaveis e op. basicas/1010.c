#include <stdio.h>
 
int main() {
 
    int code1, code2, qtd1, qtd2;
    double price1, price2;
    
    scanf("%d %d %lf", &code1, &qtd1, &price1);
    scanf("%d %d %lf", &code2, &qtd2, &price2);
    
    double final = (qtd1 * price1) + (qtd2 * price2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", final);
 
    return 0;
}