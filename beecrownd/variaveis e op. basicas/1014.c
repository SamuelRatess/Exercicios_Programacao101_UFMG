#include <stdio.h>
 
int main() {
 
    int km;
    double fuel;
    
    scanf("%d", &km);
    scanf("%lf", &fuel);
    
    double consumo = km / fuel;
    
    printf("%.3lf km/l\n", consumo);
 
    return 0;
}