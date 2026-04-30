#include <stdio.h>

int main(void)
{
    int item;
    printf("Name of the item:");
    scanf("%s" , &item);
    int price;
    printf("Price of the item:");
    scanf("%d" , &price);
    int quantity;
    printf("Quantity of items:");
    scanf("%d" , &quantity);


    printf("\n");
    printf("**********************************\n");
    printf("Cool Store Name\n");
    printf("**********************************\n");

    printf("Item        Quantity        Price\n");
    printf("%s"        2        $50.00\n");
    printf("-----------------------------------\n");
    int total = price*quantity;
    printf ("total: %d \n", total);
    printf("-----------------------------------\n");
    printf("Thank you for your purchase!\n");



}
