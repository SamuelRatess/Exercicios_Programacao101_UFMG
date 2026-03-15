#include <stdio.h>

struct Vetor{
    float x;
    float y;
    float z;
};

int main() {
    
    struct Vetor v1, v2, soma;
    
    printf("Digite os valores de x, y e z do primeiro vetor:\n");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);

    printf("Digite os valores de x, y e z do segundo vetor:\n");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);
    
    soma.x = v1.x + v2.x;
    soma.y = v1.y + v2.y;
    soma.z = v1.z + v2.z;
    
    printf("Soma: (%.2f, %.2f, %.2f)", soma.x, soma.y, soma.z);

    return 0;
}
