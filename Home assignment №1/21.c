// Задача №21

#include <stdio.h>
#include <math.h>


int main() {
    /* 21.	Напишите программу, которая по данному 
    натуральному N печатает его цифры в обратном порядке. */

    int N, last_digit;
    scanf("%d", &N);
    
    while (N){
        last_digit = N % 10;
        N = N / 10;
        printf("%d", last_digit);
    }
    
    return 0;
}