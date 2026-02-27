#include <stdio.h>
 
int main() {
    
    double n1, n2, n3, n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
    double media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10.0;
    
    printf("Media: %.1lf\n", media);
    
    if(media < 5.0) {
        printf("Aluno reprovado.\n");
    } else if(media >= 7) {
        printf("Aluno aprovado.\n");
    } else {
        double nf;
        printf("Aluno em exame.\n");
        scanf("%lf", &nf);
        printf("Nota do exame: %.1lf\n", nf);
        double final = (nf + media) / 2.0;
        if(final >= 5.0){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", final);
    }
    
    return 0;
}