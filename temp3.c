#include <stdio.h>
//1. Prototype
 c_to_f();
 f_to_c();

int main (void) {
    int  Celsius;
    printf("Degree in Celsius:");
    scanf("%d" , &Celsius);
    int Fahrenheit = (Celsius * 1.8)+32;
    printf("%dC° = %dF° \n" , Celsius, Fahrenheit);

void f_to_c(void){

    int  Fahrenheit;
    printf("Degree in Fahrenheit:");
    scanf("%d" , &Fahrenheit);
    int Celsius = (Fahrenheit - 32)/1.8;
    printf("%dF° = %dc° \n" , Fahrenheit, Celsius);
    void f_to_c(void);

}
//2. Definition
