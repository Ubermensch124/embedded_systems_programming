// Задача №20

#include <stdio.h>
#include <math.h>


int main() {
    /* 20. По данном числу N определить, является ли оно степенью числа 22. */

    int N;
    scanf("%d", &N);
    
    int start = 1;
    int count = 0;
    int res = 0;
    while (start <= N){
        if (start == N){
            res = 1;
            break;
        }
        start *= 22;
        count += 1;
    }
    
    if (res){
        printf("%d является степенью числа 22.\n22^%d = %d", N, count, N);
    } else{
        printf("%d не является степенью числа 22", N);
    }

    return 0;
}