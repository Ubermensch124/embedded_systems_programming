// Задача №23

#include <stdio.h>


int main() {
    /* 23. Написать программу, позволяющую получить словесное 
    описание школьных отметок (1 — «плохо», 2 — «неудовлетворительно», 
    3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»). */
    
    int grade;
    scanf("%d", &grade);
    
    switch(grade){
        case 1: printf("Плохо"); break;
        case 2: printf("Неудовлетворительно"); break;
        case 3: printf("Удовлетворительно"); break;
        case 4: printf("Хорошо"); break;
        case 5: printf("Отлично"); break;
    }
    
    return 0;
}