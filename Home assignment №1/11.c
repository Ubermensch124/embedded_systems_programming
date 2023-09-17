// Задача №11

#include <stdio.h>
#include <math.h>


int max(int x, int y){
    if (x >= y){
        return x;
    }
    return y;
}

int main() {
    /* 11. Вводятся три целых числа. 
    Определить какое из них наибольшее. */
    
    float x1, x2, x3, max_el;
    scanf("%f%f%f", &x1, &x2, &x3);
    
    max_el = max(max(x1, x2), x3);
    printf("Максимальное число из {%f, %f, %f} = %f", x1, x2, x3, max_el);
    return 0;
}