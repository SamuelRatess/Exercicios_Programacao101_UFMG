#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c;
    
    printf("Digite os tres coeficientes (A, B, C): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    double delta = pow(b, 2.0) - 4 * a * c;
    
    if(delta < 0) {
        printf("Nao ha raizes reais!\n");
    } else if(delta == 0){
        double x = (-b + sqrt(delta)) / (2.0 * a);
        printf("1 raiz real: %.3lf", x);
    } else {
        double x1 = (-b + sqrt(delta)) / (2.0 * a);
        double x2 = (-b - sqrt(delta)) / (2.0 * a);
        printf("2 raizes reais: %.3lf e %.3lf", x1, x2);
    }
    
    return 0;
}