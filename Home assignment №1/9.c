// Задача №9

#include <stdio.h>
#include <math.h>


int main() {
    /* 9. Вводятся три разных числа. Найти, какое из них 
    является средним (больше одного, но меньше другого). */
    
    float x1, x2, x3, mean;
    scanf("%f%f%f", &x1, &x2, &x3);
    
    if ((x2 <= x1 && x1 <= x3) || (x3 <= x1 && x1 <= x2)){
        mean = x1;
    }
    else if ((x1 <= x2 && x2 <= x3) || (x3 <= x2 && x2 <= x1)){
        mean = x2;
    }
    else {
        mean = x3;
    }
    
    printf("Среднее число из {%f, %f, %f} = %f", x1, x2, x3, mean);
    return 0;
}