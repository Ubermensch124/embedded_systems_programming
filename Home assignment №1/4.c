// Задача №4

#include <stdio.h>


int main() {
    /* 4. Дано неотрицательное целое число. 
    Найдите число десятков в его десятичной записи 
    (то есть вторую справа цифру его десятичной записи). */
    
    int number;
    scanf("%d", &number);

    int second_right_digit = (number / 10) % 10;
    printf("Цифра десятков числа %d = %d", number, second_right_digit);
}