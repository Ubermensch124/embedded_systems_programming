// Задача №24

#include <stdio.h>
#include <math.h>


float vector_length(float a, float b, float c){
    float length = powf((a*a + b*b + c*c), 0.5);
    return length;
}


float scalar_mult(float x1, float y1, float z1, float x2, float y2, float z2){
    float scalar = x1*x2 + y1*y2 + z1*z2;
    return scalar;
}


int main() {
    /* 
    24. Вводятся 3 числа, описывающие вектор в трехмерном пространстве. 
    Найти:
    1. Длину вектора
    2. Скалярное произведение
    3. Вводить информацию о двух векторах
    4. Векторное произведение между векторами
    5. Методы для суммы и разности 
    */

    float x1, y1, z1, x2, y2, z2;
    
    printf("Введите первый вектор из трех координат:\n");
    scanf("%f%f%f", &x1, &y1, &z1);
    
    printf("Введите первый вектор из трех координат:\n");
    scanf("%f%f%f", &x2, &y2, &z2);
    
    printf("Длина вектора (%f, %f, %f) = %f\n", x1, y1, z1, vector_length(x1, y1, z1));
    printf("Длина вектора (%f, %f, %f) = %f\n", x2, y2, z2, vector_length(x2, y2, z2));
    printf("Скалярное произведение векторов = %f\n", scalar_mult(x1, y1, z1, x2, y2, z2));
    printf("Векторное произведение = (%f, %f, %f)\n", y1*z2 - z1*y2, z1*x2 - x1*z2, x1*y2 - y1*x2);
    printf("Сумма векторов = (%f, %f, %f)\n", x1+x2, y1+y2, z1+z2);
    printf("Разность векторов = (%f, %f, %f)\n", x1-x2, y1-y2, z1-z2);
    
    return 0;
}