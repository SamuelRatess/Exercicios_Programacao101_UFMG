#include <stdio.h>
#include <string.h>

#define ALUNOS 5

void flush_in(){ 
    int ch;
    while((ch = fgetc(stdin)) != EOF && ch != '\n'){} 
}

struct aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

int main() {

    struct aluno a[ALUNOS];
    
    for(int i = 0; i < ALUNOS; i++){
        printf("Digite as informacoes do aluno %d:\n", i + 1);
        
        printf("Nome: ");
        flush_in();
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        
        printf("Matricula: ");
        scanf("%d", &a[i].matricula);
        flush_in();
        
        printf("Curso: ");
        fgets(a[i].curso, sizeof(a[i].curso), stdin);
    }
    
    printf("\nINFORMACOES:\n");
    
    for(int i = 0; i < ALUNOS; i++){
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s", a[i].nome);
        printf("Matricula: %d\n", a[i].matricula);
        printf("Curso: %s", a[i].curso);
    }

    return 0;
}
