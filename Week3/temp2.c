#include <stdio.h>

int main(void)
{
    int  Celsius;
    printf("Degree in Celsius:");
    scanf("%d" , &Celsius);

    int Fahrenheit = (Celsius * 1.8)+32;
    printf("%dC° = %dF° \n" , Celsius, Fahrenheit);


//checks if the two integers are equal.
    if(Celsius  <0) {
        printf("❄️ Freezing weather\n");
    }

    else if (Celsius <10) {
        printf("🥶 Very cold weather\n");
    }

    else if (Celsius <20) {
        printf("🧥 Chilly weather\n");
    }

    else if (Celsius <30) {
        printf("🖼️ Normal weather\n");
    }

    else if (Celsius <40) {
        printf("☀️ Hot weather\n");
    }

    else if (Celsius >40) {
        printf("🔥 Very hot weather \n");
    }
}



