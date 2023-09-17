// Задача №7

#include <stdio.h>
#include <math.h>


int main() {
    /* 7. Вводится две целочисленные переменные и 
    возвращает их среднее геометрическое. */
    
    int a, b;
    scanf("%d%d", &a, &b);
    
    float geom_avr = powf(a*b, 0.5);
    printf("Среднее геометрическое от (%d; %d) = %f", a, b, geom_avr);
}