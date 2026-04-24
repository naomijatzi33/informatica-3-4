#include <stdio.h>

int main(void)
{
    char UserName[50];
    printf ("User Name: ");
    scanf("%s" , &UserName);
    printf("Hello Jatzi \n");
    printf("User Name is: %s \n", UserName);

    char FavColor[50];
    printf ("Favorite Color: ");
    scanf("%s" , &FavColor);
    printf("Favorite Color: \n");
    printf("Favorite Color is: %s \n", FavColor);
}

