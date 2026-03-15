#include <stdio.h>
#include <string.h>

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

struct horario {
    int hora, minutos, segundos;
};

struct data {
    int dia, mes, ano;
};

struct compromisso {
    int datDia, datMes, horMin, horHor;
    char text[150];
};

int main() {

    struct horario h1;
    struct data d1;
    struct compromisso c1;
    
    printf("Digite a hora, depois os minutos e a seguir os segundos:\n");
    scanf("%d %d %d", &h1.hora, &h1.minutos, &h1.segundos);
    
    printf("Digite o dia, mes e ano:\n");
    scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
    
    printf("Digite o dia e o mes do seu comprimisso: ");
    scanf("%d %d", &c1.datDia, &c1.datMes);
    printf("Digite o horario do seu comprimisso(horas e minutos): ");
    scanf("%d %d", &c1.horHor, &c1.horMin);
    printf("Descreva seu compromisso:\n");
    flush_in();
    fgets(c1.text, sizeof(c1.text), stdin);
    
    printf("\nHorario: %d:%d\n", c1.horHor, c1.horMin);
    printf("Dia: %d/%d \n", c1.datDia, c1.datMes);
    printf("Descricao do compromisso: %s", c1.text);
    
    return 0;
}