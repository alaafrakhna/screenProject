/*
Name : abed almajed farakhna
Number : 1180197
section :3

*/

#include <stdio.h>
#include <stdlib.h>
//Functions used in the program
float calculat_Price (double,int,float,int);
void print_Receipt(int,int,float);

int main()
{
    double basic_price;
    float topping_price;
    int PizzaSize,topping_num;

    printf("Please Enter the size of the pizza integer value 1 for large, 2 for medium, 3 for small\n");
    scanf("%d",&PizzaSize);
    while (PizzaSize != 1 && PizzaSize != 2 && PizzaSize != 3)
    {
        printf("Invalid size!\n");
        printf("Please Enter the size of the pizza integer value 1 for large, 2 for medium, 3 for small\n");
        scanf("%d",&PizzaSize);
    }
    printf("Please Enter the number of topping\n");
    scanf("%d",&topping_num);
    while (topping_num < 0)
    {
        printf("Invalid topping number!\n");
        printf("Please Enter the number of topping\n");
        scanf("%d",&topping_num);

    }
    FILE *in = fopen("prices.txt","r");
    fscanf(in,"%lf %f",&basic_price,&topping_price);

    float total_price = calculat_Price(basic_price,topping_num,topping_price,PizzaSize);
    print_Receipt(topping_num,PizzaSize,total_price);


    return 0;
}
float calculat_Price (double basic_price,int topping_num,float topping_price ,int PizzaSize)
{
    float total_price = (basic_price + (topping_num * topping_price) ) / PizzaSize ;
    return total_price;
}
void print_Receipt(int topping_num,int PizzaSize,float total_price)
{
    printf("\n\nYour Order is :\n");
    switch(PizzaSize){
        case 1:printf("Pizza size is 1 : Large\n");
        break;
        case 2:printf("Pizza size is 2 : Medium\n");
        break;
        case 3:printf("Pizza size is 3 : Small:\n");
        break;
        }

    printf("Total Price is %f\n",total_price);
    printf("\nThanks you m3wadat :P");
}
