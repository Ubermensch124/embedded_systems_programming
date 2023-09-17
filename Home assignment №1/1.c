// Задача №1

#include <stdio.h>


int main() {
    /* 1. Даны две переменные. 
    Поменяйте значения переменных 
    друг с другом двумя способами */
    
    int a = 10;
    int b = 7;
    
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
    
    a = 10;
    b = 7;
    a -= b;     // 3
    b += a;     // 10
    a = b - a;  // 7
    printf("a = %d, b = %d", a, b);
}