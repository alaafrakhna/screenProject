#include <stdio.h>
#include <stdlib.h>
/*
abedalhameed    #1180196
abedalmajeed    #1180197
*/

void displayMainMenu();
void addBook(int[],double[],int *);
void removeBook(int[],double[],int *);
void searchForBook(int[],double[],int);
void uploadDataFile(int[],double[],int *);
void updateDataFile(int[],double[],int);
void printBooks(int[],double[],int);
int size =0;
int main()
{
   // int bins[s]= {1234,2345};
   // double prices[s]= {72.45,25.20};
   int l=0;
    int * s =&l;

    int bins[100];
    double prices[100];

    printf("Welcome to my bookstore Management System\n");

    uploadDataFile(bins,prices,&s);

    displayMainMenu();

    int x,i ;
    scanf("%d",&x);

    while(x!=5)
    {
        switch(x)
        {
        case 1:
            addBook(bins,prices,&s);
            displayMainMenu();
            scanf("%d",&x);

            break;
        case 2:
            removeBook(bins,prices,&s);
            displayMainMenu();
            scanf("%d",&x);
            break;
        case 3:
            searchForBook(bins,prices,s);
            displayMainMenu();
            scanf("%d",&x);
            break;

        case 4:
            printBooks (bins,prices,s);
            displayMainMenu();
            scanf("%d",&x);
            break;

        default:
            printf("No Such Operation ! Please Try Again\n\n");
            displayMainMenu();
            scanf("%d",&x);
            break;

        }

    }

    updateDataFile(bins,prices,s);

    return 0;
}


void displayMainMenu()
{

    printf("Please Selected an Operation (1-5)\n");
    printf("1-Add a Book\n");
    printf("2-Remove a Book\n");
    printf("3-Search For a Book\n");
    printf("4-print Book List\n");
    printf("5-Exit System\n\n");


}
void addBook(int bins[], double prices[],int * s)
{
    int i,x;
    int n;
    double p;

    if (size==100)
    {
        printf("List is Full, No change\n");
    }
    else
    {
        printf("Enter bin number for book \n");
        scanf("%d",&n);
        printf("Enter price of book\n");
        scanf("%lf",&p);

        for(i=0; i<size; i++)
        {
            if(bins[i]==n)
            {
                x=1;
            }
        }
        if(x==1)
            printf("Book With bin %d already exists, No change\n",n);
        else
        {
            size++;
            for(i=size; i>0; i--)
            {
                bins[i]=bins[i-1];
                prices[i]=prices[i-1];
            }
            bins[0]=n;
            prices[0]=p;
            printf("Book With bin %d has been added\n",n);
        }


    }


}


void removeBook(int bins[], double prices[],int *s)
{

    int i,x=-1;

    int n;

    if (size==0)
    {
        printf("List is empty \n");
    }
    else
    {
        printf("Enter bin number for book to remove\n");
        scanf("%d",&n);

        for(i=0; i<size; i++)
        {
            if(bins[i]==n)
            {
                x=i;
            }
        }
        if(x==-1)
        {

            printf("book with bin %d does not exist, No change\n",n);

        }
        else
        {
            for(i=x; i<size-1; i++)
            {
                bins[i]=bins[i+1];
                prices[i]=prices[i+1];
            }
            size--;
            printf("book with bin %d is removed\n",n);
        }
    }





}
void searchForBook(int bins[], double prices[], int s)
{
    int i,x=-1;

    int n;

    if (size==0)
    {
        printf("List is empty \n");
    }
    else
    {
        printf("Enter bin to searched for \n");
        scanf("%d",&n);

        for(i=0; i<size; i++)
        {
            if(bins[i]==n)
            {
                x=i;
            }
        }
        if(x==-1)
        {

            printf("pins %d does not exist, No change\n",n);

        }
        else
        {
            printf("bin# = %d\t",bins[x]);
            printf("price = %.2lf \n",prices[x]);
        }

    }

}
void uploadDataFile(int bins[], double prices[],int *s)
{
    int  bin ;
    double p;
    FILE *in = fopen("books.txt","r");


    if(in == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }
    while (fscanf(in, "%d %lf",&bin,&p)!=EOF){

        bins[size]=bin;
        prices[size]=p;
        size++;
    }
    fclose(in);

    printf("Uploaded File ...\n");
    printf("Data File Uploaded \n\n");
}


void updateDataFile(int bins[], double prices[],int s)
{
     FILE * fp;
   int i;
   /* open the file for writing*/
   fp = fopen ("books.txt","w");

   /* write 10 lines of text into the file stream*/
   for(i = 0; i < size;i++){
       fprintf (fp, "%d    %lf\n",bins[i],prices[i]);
   }

   /* close the file*/
   fclose (fp);

    printf("Updating Data File...\n");
    printf("Data File Updated \n");
    printf("Tank You For Using My Bookstore Management System .GodBye.\n");


}
void printBooks (int bins[], double prices[],int s)
{
    int i ;

    if (size==0)
    {
        printf("List is Empty...\n");
    }
    else
    {

        for(i=0; i<size; i++)
        {
            printf("bin# = %d\t",bins[i]);
            printf("price = %.2lf\n",prices[i]);
        }
    }





}
