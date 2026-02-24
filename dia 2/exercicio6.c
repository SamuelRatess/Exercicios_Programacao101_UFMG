#include <stdio.h>

int main(){

    int diaInicial, mesInicial;
    int diaFinal, mesFinal;
    int dias = 0;

    printf("Digite o dia e o mes inicial: ");
    scanf("%d %d", &diaInicial, &mesInicial);

    printf("Digite o dia e o mes final: ");
    scanf("%d %d", &diaFinal, &mesFinal);

    while(diaInicial != diaFinal || mesFinal != mesInicial) {
        dias++;
        if(diaInicial != 30) {
            diaInicial++;
        } else {
            if(mesInicial != 12){
                mesInicial++;
            } else {
                mesInicial = 1;
            }
            diaInicial = 0;
            diaInicial++;
        }
    }
    
    printf("Quantidade de dias sera: %d", dias);

    return 0;
}