#include <stdio.h>

int main()
{
    double salario, prestacao;
    
    printf("Digite o salario e a prestacao: ");
    scanf("%lf %lf", &salario, &prestacao);
    if(prestacao < 0 || salario < 0) {
        printf("Valores digitados invalidos!");
    } else {
        if(prestacao > salario * 0.2){
            printf("Emprestimo nao concedido!");
        } else {
            printf("Emprestimo concedido!");
        }
    }

    return 0;
}
