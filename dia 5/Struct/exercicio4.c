#include <stdio.h>
#include <string.h>

#define ALUNOS 2

void flush_in(){ 
    int ch;
    while((ch = fgetc(stdin)) != EOF && ch != '\n'){} 
}

struct aluno {
    char nome[50];
    double nota1, nota2, nota3;
    int matricula;
};

int main() {
    
    int j = 0, k = 0, l = 0; 
    struct aluno a[ALUNOS];
    double media[ALUNOS];
    char verify[ALUNOS][30];
    
    for(int i = 0; i < ALUNOS; i++){
        printf("Digite as informacoes do aluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &a[i].matricula);
        printf("Nome: ");
        flush_in();
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        printf("Notas das provas:\n");
        scanf("%lf %lf %lf", &a[i].nota1, &a[i].nota2, &a[i].nota3);
        media[i] = (a[i].nota1 + a[i].nota2 + a[i].nota3) / 3.0;
        if(media[i] < 6){
            strcpy(verify[i], "Reprovado");
        } else {
            strcpy(verify[i], "Aprovado");
        }
    }
    
    double maior1 = a[0].nota1;
    for(int i = 0; i < ALUNOS; i++){
        if(maior1 < a[i].nota1){
            j = i;
            maior1 = a[i].nota1;
        }
    }
    
    double maiorMedia = media[0];
    
    for(int i = 0; i < ALUNOS; i++){
        if(maiorMedia < media[i]){
            k = i;
            maiorMedia = media[i];
        }
    }
    
    double menorMedia = media[0];
    for(int i = 0; i < ALUNOS; i++){
        if(menorMedia > media[i]){
            l = i;
            menorMedia = media[i];
        }
    }
    
    printf("\n");
    printf("Aluno com maior nota da primeira prova: %s", a[j].nome);
    printf("Aluno com maior media geral: %s", a[k].nome);
    printf("Aluno com menor media geral: %s\n", a[l].nome);
    
    printf("Relatorio final dos Alunos:\n");
    for(int i = 0; i < ALUNOS; i++){
        printf("Aluno: %s", a[i].nome);
        printf("Situação: %s\n", verify[i]);
        printf("Media: %.2lf\n\n", media[i]);
    }

    return 0;
}