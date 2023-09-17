// Задача №6

#include <stdio.h>
#include <math.h>


int main() {
    /* 6. Вводится две целочисленные переменные 
    и возвращает их среднее арифметическое. */
    
    int a, b;
    scanf("%d%d", &a, &b);
    
    float avr = (float) (a + b) / 2;
    printf("Среднее арифметическое от (%d; %d) = %f", a, b, avr);
}
