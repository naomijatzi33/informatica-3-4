#include <stdio.h>

int main(void)
{
    int  Fahrenheit;
    printf("Degree in Fahrenheit:");
    scanf("%d" , &Fahrenheit);

    int Celsius = (Fahrenheit - 32)/1.8;
    printf("%dF° = %dc° \n" , Fahrenheit, Celsius);
    //-40F = -40C
}
