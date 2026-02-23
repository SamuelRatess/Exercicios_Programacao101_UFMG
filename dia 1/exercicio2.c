#include <stdio.h>
// exercicio 2
int main(){

    double tempCelsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &tempCelsius);
    double tempFahren = (9 * tempCelsius) / 5 + 32;
    printf("A temperatura em Fahrenheit sera: %.2lf", tempFahren);


    return 0;
}
