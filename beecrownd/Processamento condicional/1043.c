#include <stdio.h>
 
int main() {
 
    double n1, n2, n3;
    
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    
    if(n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1){
        double sum = n1 + n2 + n3;
        printf("Perimetro = %.1lf\n", sum);
    } else {
        double area = (n1 + n2) * n3 / 2.0;
        printf("Area = %.1lf\n", area);
    }
 
    return 0;
}