#include <stdio.h>

int main(void)
{
    int height;
    printf ("What is the rectagle height: ");
    scanf("%d" , &height);
    int width;
    printf ("What is the rectagle width: ");
    scanf("%d" , &width);

    int Area = height*width;
    int Perimeter = 2*(height+width);
    printf("Area: %d \n", Area);
    printf("Perimeter: %d \n", Perimeter);

}
