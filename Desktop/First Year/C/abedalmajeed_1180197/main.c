#include <stdio.h>
#include <stdlib.h>
//abedalmajeed maali   number 1180197
int Cal_Sum_Digit(int) ;

int main()
{
    int N,Max_N;
    int Sum,Max_Sum=0;
    printf("Hi\n");
    printf("***Please Enter A Number Or -1 To Stop***\n");
    scanf("%d",&N) ;
//this asks the user to enter integers until the value -1 is entered.
    while (N!= -1 )
    {
        Sum=Cal_Sum_Digit(N);
        if(Sum>Max_Sum)
        {
            Max_Sum=Sum;
            Max_N=N;
        }
        printf("***Please Enter A Number Or -1 To Stop***\n");
        scanf("%d",&N) ;
    }
    printf("%d\n",Max_N);
    printf("Goodbye");
    return 0;
}
//this function calculate the sum of digit
int Cal_Sum_Digit(int N)
{
    int S;
    while (N!=0)
    {
        S=S+N%10;
        N=N/10;
    }
    return S;
}

