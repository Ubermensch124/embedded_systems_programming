// Задача №22

#include <stdio.h>


int gcd(int a, int b){
    int temp;
    while (a != 1 && b != 1){
        if (a % b == 0){
            return b;
        }
        temp = a % b;
        a = b;
        b = temp;
    }
    return b;
}


int max(int a, int b){
    int maximum = (a >= b) ? a : b;
    return maximum;
}

int min(int a, int b){
    int minimum = (a <= b) ? a : b;
    return minimum;
}


int main() {
    /* 22. Вводится два положительных целых числа. Найти НОД. */

    int a, b;
    scanf("%d%d", &a, &b);
    
    int A = max(a, b);
    int B = min(a, b);
    
    printf("НОД(%d, %d) = %d", A, B, gcd(A, B));
    return 0;
}