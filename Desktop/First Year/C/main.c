#include <stdio.h>
#include <stdlib.h>

//Functions used in the program
float calculat_Price (double,int,float,int);
void print_Receipt(int,int,float);

int main()
{
    // Variables used in the program
    int size,topping_num;
    double basic_price;
    float topping_price;
    ////////////////////////////////

    printf("\t\t\t\tWelcome!\n\n");
    printf("Enter the size of the pizza (integer value 1=large, 2=medium, 3=small\n");
    scanf("%d",&size);
    while (size != 1 && size != 2 && size != 3)
    {
        printf("Invalid size!\n");
        printf("Enter the size of the pizza (integer value 1=large, 2=medium, 3=small\n");
        scanf("%d",&size);
    }
    printf("Enter the number of topping\n");
    scanf("%d",&topping_num);
    while (topping_num < 0)
    {
        printf("Invalid topping number!\n");
        printf("Enter the number of topping\n");
        scanf("%d",&topping_num);

    }
    FILE *in = fopen("prices.txt","r");
    fscanf(in,"%lf %f",&basic_price,&topping_price);

    float total_price = calculat_Price(basic_price,topping_num,topping_price,size);
    print_Receipt(topping_num,size,total_price);


    return 0;
}
float calculat_Price (double basic_price,int topping_num,float topping_price ,int size)
{
    float total_price = (basic_price + (topping_num * topping_price) ) / size ;
    return total_price;
}
void print_Receipt(int topping_num,int size,float total_price)
{
    printf("\n\nYour Order is :\n");
    if (size == 1)
        printf("Pizza size is 1 (Large)\n");
    else if  (size == 1)
        printf("Pizza size is 2 (Medium)\n");
    else
        printf("Pizza size is 3 (Small)\n");
    printf("Total Price = %f\n",total_price);
    printf("\nThanks for Visiting us \n");
    printf("We hope to see you soon :)\n");
}
