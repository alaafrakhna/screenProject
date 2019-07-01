/*
abedalmajeed frakhna
#1180197
section 3
*/
#include <stdio.h>
#include <stdlib.h>

void Insert_Element(int[],int);
void Remove_Element(int[],int);
void Print_Array(int[]);

int counter =0;

int main()
{
    int x,n,i;
    int Arr[100];

    printf("Enter Your Choice:\n");
    printf("1.Insert Element 2.Remove Element 3.Print Array 4.Exit From Program\n");
    scanf("%d",&x);
    while(x!=4)
    {
        switch(x)
        {
        case(1):

            if (counter==100)
            {
                printf("List is Full, No change\n");
            }
            else
            {
                printf("Enter element to insert\n");
                scanf("%d",&n);
                Insert_Element(Arr,n);
            }

            break;
        case(2):
            if (counter==0)
            {
                printf("List is empty, No change\n");
            }
            else
            {
                printf("Enter element to remove\n");
                scanf("%d",&n);
                Remove_Element(Arr,n);
            }

            break;
        case(3):
            if (counter==0)
            {
                printf("Array is Empty...\n");
            }
            else
            {
                Print_Array(Arr);
            }

            break;

        default:
            printf("Wrong Choice\n");

        }
        printf("Enter Your Choice:\n");
        printf("1.Insert Element 2.Remove Element 3.Print Array 4.Exit From Program\n");
        scanf("%d",&x);
    }

    printf("Goodbye....");


    return 0;
}
void Insert_Element(int Arr[], int n)
{
    int i,x;

    for(i=0; i<counter; i++)
    {
        if(Arr[i]==n)
        {
            x=1;
        }

    }
    if(x==1)
    {

        printf("Element %d already exists, No change\n",n);

    }
    else
    {
        counter++;
        for(i=counter; i>0; i--)
        {
            Arr[i]=Arr[i-1];
        }
        Arr[0]=n;
        printf("Element %d Is Inserted...\n",n);
    }

}

void Print_Array(int Arr[])
{
    int i ;
    printf("Elements In List Are:\n");
    for(i=0; i<counter; i++)
    {
        printf("%d\n",Arr[i]);
    }

}


void Remove_Element(int Arr[],int n)
{

    int i,x=-1;

    for(i=0; i<counter; i++)
    {
        if(Arr[i]==n)
        {
            x=i;
        }
    }
    if(x==-1)
    {

        printf("Element %d Does Not Exist,No Change...\n",n);

    }
    else
    {
        for(i=x; i<counter-1; i++)
        {
            Arr[i]=Arr[i+1];
        }
        counter--;
        printf("Element %d Is Removed...\n",n);
    }


}


