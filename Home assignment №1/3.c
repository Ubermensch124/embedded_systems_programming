// Задача №3

#include <stdio.h>


int main() {
    /* 3. Дано натуральное число. 
    Выведите его последнюю цифру */
    
    int number;
    scanf("%d", &number);
    
    printf("Последняя цифра числа %d = %d", number, number%10);
}