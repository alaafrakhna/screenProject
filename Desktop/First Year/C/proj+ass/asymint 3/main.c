//abedalhameed frakhna
//1180196
//section 3
#include <stdio.h>
#include <stdlib.h>
int counter =0;
void print(int[]);
void insert(int[]);
void remov(int[]);

int main()
{
    int x;
    int i;
    int A[100];
    printf("Enter your choice: 1) insert 2) remove 3) print 4) exit\n");
    scanf("%d",&x);
    while(x!=4)
    {
        switch(x)
        {
        case(1):
            insert(A);
            break;
        case(2):
            remov(A);
            break;
        case(3):
            print(A);
            break;

        default:
            printf("error\n");

        }
        printf("Enter your choice: 1) insert 2) remove 3) print 4) exit\n");
        scanf("%d",&x);
    }

    printf("Goodbye");
    return 0;
}
void insert(int A[])
{
    int i,x;
    int n;

    if (counter==100)
    {
        printf("List is Full, No change\n");
    }
    else
    {
        printf("Enter element to insert\n");
        scanf("%d",&n);

        for(i=0; i<counter; i++)
        {
            if(A[i]==n)
            {
                x=1;
            }
        }
        if(x==1)
            printf("Element %d already exists, No change\n",n);
        else
        {
            counter++;
            for(i=counter; i>0; i--)
            {
                A[i]=A[i-1];
            }
            A[0]=n;
            printf("Element %d is inserted\n",n);
        }


    }



}

void print(int A[])
{
    int i ;

    if (counter==0)
    {
        printf("Array is Empty...\n");
    }
    else
    {

        printf("Elements in list are:\n");
        for(i=0; i<counter; i++)
        {
            printf("%d\n",A[i]);
        }
    }


}


void remov(int A[])
{

    int i,x=-1;

    int n;

    if (counter==0)
    {
        printf("List is empty \n");
    }
    else
    {
        printf("Enter element to remove\n");
        scanf("%d",&n);

        for(i=0; i<counter; i++)
        {
            if(A[i]==n)
            {
                x=i;
            }
        }
        if(x==-1)
        {

            printf("Element %d does not exist, No change\n",n);

        }
        else
        {
            for(i=x; i<counter-1; i++)
            {
                A[i]=A[i+1];
            }
            counter--;
            printf("Element %d is removed\n",n);
        }
    }
}


