#include <stdio.h>
#include <string.h>

#define ALUNOS 5
#define PROVAS 5

int verify(double n){
    if(n <= 3){
        return 0;
    } else {
        return 1;
    }
}

int mediaNotas(double n){
    if(n < 6){
        return 0;
    } else {
        return 1;
    }
}

int main() {
    
    char nomes[ALUNOS][50];
    char final[ALUNOS][20];
    double notas[ALUNOS][PROVAS];
    double media[ALUNOS], soma[ALUNOS];

    for(int i = 0; i < ALUNOS; i++){
        soma[i] = 0;

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite as %d notas:\n", PROVAS);
        for(int j = 0; j < PROVAS; j++){
            scanf("%lf", &notas[i][j]);
            soma[i] += notas[i][j];
        }

        media[i] = soma[i] / PROVAS;

        int k = mediaNotas(media[i]);
        int aprovado = 1;

        for(int j = 0; j < PROVAS; j++){
            if(!verify(notas[i][j])){
                aprovado = 0;
                break;
            }
        }

        if(!k || !aprovado){
            strcpy(final[i], "Reprovado");
        } else {
            strcpy(final[i], "Aprovado");
        }
    }

    printf("\n--- RELATORIO ---\n");

    for(int i = 0; i < ALUNOS; i++){
        printf("Aluno: %s\n", nomes[i]);
        printf("Media: %.2lf\n", media[i]);
        printf("Situacao: %s\n\n", final[i]);
    }

    return 0;
}