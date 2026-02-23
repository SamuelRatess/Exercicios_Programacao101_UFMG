#include <stdio.h>
#include <math.h>
#define PI 3.14159
// exercicio 3
int main(){

    double raio;
    printf("Digite o raio: ");
    scanf("%lf", &raio);

    double area = pow(raio, 2.0) * PI;
    double circunferencia = 2 * raio * PI;

    printf("A circunferencia mede %.3lf e a area sera %.3lf", circunferencia, area);


    return 0;
}
