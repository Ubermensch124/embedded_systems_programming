// Задача №2

#include <stdio.h>
#include <math.h>


int main() {
    /* 2. Дано два числа a и b. Найдите гипотенузу 
    треугольника с заданными катетами. */
    
    float k1, k2;
    scanf("%f%f", &k1, &k2);

    float hyp = powf(k1*k1 + k2*k2, 0.5);
    printf("Катеты: (%f, %f)\nГипотенуза: %f", k1, k2, hyp);
}