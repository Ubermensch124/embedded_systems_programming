// Задача №5

#include <stdio.h>


int main() {
    /* 5. Дано двузначное число. 
    Найдите число десятков в нем. */
    
    int number;
    scanf("%d", &number);
    
    int decades = number / 10;
    printf("Цифра десятков числа %d = %d", number, decades);
}
