#include <stdio.h>
 
int main() {
 
    int x, y;
    double z;
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%lf", &z);
    
    printf("NUMBER = %d\n", x);
    printf("SALARY = U$ %.2lf\n", y * z);
 
    return 0;
}