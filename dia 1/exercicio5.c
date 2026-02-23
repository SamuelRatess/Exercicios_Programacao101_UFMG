#include <stdio.h>
#define AUTONOMIA 12
// exercicio 5
int main(){

    double tempo;
    printf("Digite o tempo gasto na viagem(em horas): ");
    scanf("%lf", &tempo);

    double velocidade;
    printf("Digite a velocidade media durante a viagem (em km/h): ");
    scanf("%lf", &velocidade);

    double distancia = velocidade * tempo;
    double litros = distancia / AUTONOMIA;

    printf("A quantidade de litros necessarias sera %.3lf", litros);

    return 0;
}
