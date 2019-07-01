#include <stdio.h>
#include <stdlib.h>
//abedalhameed maali   #1180196
int SumOfDigits(int) ;

int main()
{


    int num,max=0,sum=0,max_number;
    printf("Enter number or -1 to stop\n");
    scanf("%d",&num) ;
/*this while asks the user to enter integers until the value -1 is entered*/
    while (num!= -1 )
    {
        sum=SumOfDigits(num);
        if(sum>max){
            max=sum;
            max_number=num;
}
        printf("Enter number or -1 to stop\n");

        scanf("%d",&num) ;

    }
   printf("%d",max_number); //print the number that has max sum of digit
   return 0;
}
/*this function take number and return the sum of its digits */
int SumOfDigits(int num)

{

    int sum=0;
    while (num!=0)
    {

        sum=sum+num%10;
        num=num/10;
    }

    return sum;
}

