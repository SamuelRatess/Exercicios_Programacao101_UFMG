#include <stdio.h>
// exercicio 6
int main(){

    int diaInicial, mesInicial;
    int diaFinal, mesFinal;
    int totalDiasInicial, totalDiasFinal;
    int diferencaDias;

    printf("Digite o dia e o mes inicial: ");
    scanf("%d %d", &diaInicial, &mesInicial);

    printf("Digite o dia e o mes final: ");
    scanf("%d %d", &diaFinal, &mesFinal);

    totalDiasInicial = (mesInicial - 1) * 30 + diaInicial;
    totalDiasFinal = (mesFinal - 1) * 30 + diaFinal;

    diferencaDias = totalDiasFinal - totalDiasInicial;

    printf("A diferenca de dias sera: %d", diferencaDias);

    return 0;
}