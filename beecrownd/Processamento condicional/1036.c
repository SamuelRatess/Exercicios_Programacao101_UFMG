#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double delta = pow(b, 2.0) - 4 * a * c;
    
    if(delta < 0 || !a){
        printf("Impossivel calcular\n");
    } else {
        double r1 = (-b + sqrt(delta)) / (2.0 * a);
        double r2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
 
    return 0;
}