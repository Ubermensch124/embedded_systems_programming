// Задача №16

#include <stdio.h>


int if_prime(int number){
    if (number < 2){
        return 0;
    }
    
    for (int i = 2; i < (number / 2); i++){
        if (number % i == 0){
            return 0;
        }
    }
    
    return 1;
}


int main() {
    /* 16. Вывести все простые числа в произвольном интервале [a, b]. */
    
    int a, b;
    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++){
        if (if_prime(i)){
            printf("%d\n", i);
        }
    }

    return 0;
}