#include <stdio.h>
// exercicio 4
int main(){

    double salario;
    printf("Digite o salario: ");
    scanf("%lf", &salario);

    double vendas;
    printf("Digite quanto gerou as vendas: ");
    scanf("%lf", &vendas);

    double salarioTotal = salario + vendas * 0.15;

    printf("O total em que o vendedor recebe: R$%.2lf\n", salarioTotal);

    return 0;
}
