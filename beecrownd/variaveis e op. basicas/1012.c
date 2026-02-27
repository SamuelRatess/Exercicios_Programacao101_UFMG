#include <stdio.h>
 
int main() {
 
    double a, b, c, trian, quad, circ, reta, trap;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    trian = a * c / 2.0;
    quad = b * b;
    circ = c * c * 3.14159;
    reta = a * b;
    trap = (a + b) * c / 2.0;
    
    printf("TRIANGULO: %.3lf\n", trian);
    printf("CIRCULO: %.3lf\n", circ);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", reta);
 
    return 0;
}