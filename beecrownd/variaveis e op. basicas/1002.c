#include <stdio.h>
#define PI 3.14159
 
int main() {
 
    double radius;
    
    scanf("%lf", &radius);
    
    double area = radius * radius * PI;
    
    printf("A=%.4lf\n", area);
 
    return 0;
}