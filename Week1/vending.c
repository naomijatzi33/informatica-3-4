#include <stdio.h>
int main(void)
{
    //Creat variables for first snack (Monster)
    float price1 = 70.99;
    int Quantity_available1 = 20;
    char Selection_Code1 = 'A';
    //Creat variables for Second snack (Gummies)
    float price2 = 25.99;
    int Quantity_available2 = 15;
    char Selection_Code2 = 'B';
    //Creat variables for Third snack (Marshmellows)
    float price3 = 30.99;
    int Quantity_available3 = 10;
    char Selection_Code3 = 'C';

    printf("Vending Machine Stock\n");
    printf("---------------------------\n");
    printf("\n");
    printf("Item name: Monster\n");
    printf("Price: %.2f \n", price1);
    printf("Quantity_available1: %d \n",Quantity_available1);
    printf("Selection_Code1 %c \n", Selection_Code1);
    printf("\n");

    printf("\n");
    printf("Item name: Gummies\n");
    printf("Price: %.2f \n", price2);
    printf("Quantity_available2: %d \n",Quantity_available2);
    printf("Selection_Code2 %c \n", Selection_Code2);
    printf("\n");

    printf("\n");
    printf("Item name: Marshmellows\n");
    printf("Price: %.2f \n", price3);
    printf("Quantity_available3: %d \n",Quantity_available3);
    printf("Selection_Code3 %c \n", Selection_Code3);
    printf("\n");
}
