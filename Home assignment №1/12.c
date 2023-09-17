// Задача №12

#include <stdio.h>
#include <stdbool.h>


float max(float x, float y){
    return (x >= y) ? x : y;
}


bool is_triangle(float a, float b, float c){
    float max_side = max(max(a, b), c);
    return (max_side <= ((a + b + c) - max_side)) ? true : false;
    
}


const char* check_triangle_type(float a, float b, float c){
    if (a == b && b == c){
        return "Равносторонний";
    }
    else if ((a == b && b != c) || 
             (a == c && c != b) || 
             (b == c && c != a)){
        return "Равнобедренный";
    }
    return "Разносторонний";
}


int main() {
    /* 12. По длинам трех отрезков, введенных пользователем, 
    определить возможность существования треугольника, 
    составленного из этих отрезков. Если такой треугольник существует, 
    то определить, является ли он разносторонним, равнобедренным или равносторонним. */
    
    float a, b, c;
    bool flag;
    scanf("%f%f%f", &a, &b, &c);
    
    flag = is_triangle(a, b, c);
    
    if (flag){
        printf("%s", check_triangle_type(a, b, c));
    }
    else {
        printf("Не является треугольником");
    }
    
    return 0;
}