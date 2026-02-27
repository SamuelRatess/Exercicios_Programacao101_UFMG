#include <stdio.h>
 
int main() {
 
    int hour, speed;
    
    scanf("%d", &hour);
    scanf("%d", &speed);
    
    double aux = (double) speed * hour;
    double liters = aux / 12;
    
    printf("%.3lf\n", liters);    
    
    return 0;
}