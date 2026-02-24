#include <stdio.h>

int main() {
    
    char genero;
    double altura;
    
    printf("Digite o genero e a altura: ");
    scanf("%c %lf", &genero, &altura);
    
    if(genero == 'M' || genero == 'm'){
        double m = (62.1 * altura) - 44.7;
        printf("%.2lf", m);
    } else if(genero == 'H' || genero == 'h'){
        double h = (72.7 * altura) - 58;
        printf("%.2lf", h);
    } else {
        printf("Genero digitado invalido!");
    }
    
    

    return 0;
}
