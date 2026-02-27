#include <stdio.h>
 
int main() {
 
    double n1, n2;
    
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    
    double med = ((n1 * 3.5) + (n2 * 7.5)) / 11.0;
    
    printf("MEDIA = %.5lf\n", med);
 
    return 0;
}