#include <stdio.h>
#include <string.h>

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

struct pessoa {
    char nome[50];
    int idade;
    char endereco[50];
};

int main() {

    struct pessoa p1;
    
    printf("Digite o nome: ");
    fgets(p1.nome, sizeof(p1.nome), stdin);
    
    printf("Digite a idade: ");
    scanf("%d", &p1.idade);
    
    printf("Digite o endereco: ");
    flush_in();
    fgets(p1.endereco, sizeof(p1.endereco), stdin);
    
    printf("Nome: %s", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Endereco: %s\n", p1.endereco);
    
    return 0;
}
