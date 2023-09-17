// Задача №18

#include <stdio.h>
#include <math.h>


int main() {
    /* 18.	Последовательность целых чисел, оканчивающаяся нулём. 
    Само число нуль не является членом последовательности, а
    является лишь сигналом того, что достигнут конец последовательности. 
    В последовательности есть как минимум одно ненулевое число. 
    Вывести максимальное и минимальное значения */
    
    double maximum = -INFINITY;
    double minimum = INFINITY;
    int number;
    scanf("%d", &number);
    while (number != 0){
        if (number > maximum){
            maximum = number;
        }
        if (number < minimum){
            minimum = number;
        }
        
        scanf("%d", &number);
    }
    
    printf("Максимальное число: %d\n", (int) maximum);
    printf("Минимальное число: %d\n", (int) minimum);

    return 0;
}
