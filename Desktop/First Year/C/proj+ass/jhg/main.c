#include <stdio.h>
#include <stdlib.h>

//mohammad qaher//1183113//

void displayMainMenu();
void addB(int[] , double[]);
void remB(int[], double[]);
void sFB(int[], double[]);
void uplDFile(int[],double[]);
void updDFile(int[],double[]);
void pBs(int[],double[]);
int size =0;
int main()
{

    int bs[100];
    double prs[100];

    printf("Welcome to my bookstore Management System\n");

    uplDFile(bs,prs);

    displayMainMenu();

    int y,i ;
    scanf("%d",&y);

    while(y!=5)
    {
        switch(y)
        {
    case 1:
            addB(bs,prs);
            displayMainMenu();
            scanf("%d",&y);

            break;
    case 2:
            remB(bs,prs);
            displayMainMenu();
            scanf("%d",&y);
            break;
    case 3:
            sFB(bs,prs);
            displayMainMenu();
            scanf("%d",&y);
            break;

    case 4:
            pBs (bs,prs);
            displayMainMenu();
            scanf("%d",&y);
    break;

   default:
            printf("No Such Operation ! Please Try Again\n\n");
            displayMainMenu();
            scanf("%d",&y);
            break;

        }

    }

    updDFile(bs,prs);

    return 0;
}


void displayMainMenu()
{

    printf("Please Selected an Operation (1-5)\n");
    printf("(1)-Add a Book\n");
    printf("(2)-Remove a Book\n");
    printf("(3)-Search For a Book\n");
    printf("(4)-print Book List\n");
    printf("(5)-Exit System\n\n");


}
void addB(int bs[], double prs[])
{
    int i,y;
    int a;
    double w;

    if (size==100)
    {
        printf("List is Full, No change\n");
    }
    else
    {
        printf("Enter bin number for book \n");
        scanf("%d",&a);
        printf("Enter price of book\n");
        scanf("%lf",&w);

        for(i=0; i<size; i++)
        {
            if(bs[i]==a)
            {
                y=1;
            }
        }
        if(y==1)
            printf("Book With bin %d already exists, No change\n",a);
        else
        {
            size++;
            for(i=size; i>0; i--)
            {
                bs[i]=bs[i-1];
                prs[i]=prs[i-1];
            }
            bs[0]=a;
            prs[0]=w;
            printf("Book With bin %d has been added\n",a);
        }


    }


}


void remB(int bs[], double prs[])
{

    int i,y=-1;

    int a;

    if (size==0)
    {
        printf("List is empty \n");
    }
    else
    {
        printf("Enter bin number for book to remove\n");
        scanf("%d",&a);

        for(i=0; i<size; i++)
        {
            if(bs[i]==a)
            {
                y=i;
            }
        }
        if(y==-1)
        {

            printf("book with bin %d does not exist, No change\n",a);

        }
        else
        {
            for(i=y; i<size-1; i++)
            {
                bs[i]=bs[i+1];
                prs[i]=prs[i+1];
            }
    size--;
    printf("book with bin %d is removed\n",a);
        }
    }





}
void sFB(int bs[], double prs[])
{
    int i,y=-1;

    int a;

    if (size==0)
    {
        printf("List is empty \n");
    }
    else
    {
        printf("Enter bin to searched for \n");
        scanf("%d",&a);

        for(i=0; i<size; i++)
        {
            if(bs[i]==a)
            {
                y=i;
            }
        }
        if(y==-1)
        {

            printf("pins %d does not exist, No change\n",a);

        }
        else
        {
            printf("bin# = %d/t",bs[y]);
            printf("price = %lf \n",prs[y]);
        }

    }

}
void uplDFile(int bs[], double prs[])
{
    int  bi ;
    double p;
    FILE *in = fopen("books.txt","r");


    if(in == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }
    while (fscanf(in, "%d %lf",&bi,&p)!=EOF){

        bs[size]=bi;
        prs[size]=p;
        size++;
    }
    fclose(in);

    printf("Uploaded File ...\n");
    printf("Data File Uploaded \n\n");
}


void updDFile(int bs[], double prs[])
{
     FILE * fp;
   int i;
   /* open the file for writing*/
   fp = fopen ("books.txt","w");

   /* write 10 lines of text into the file stream*/
   for(i = 0; i < size;i++){
       fprintf (fp, "%d    %lf\n",bs[i],prs[i]);
   }

   /* close the file*/
   fclose (fp);

    printf("Updating Data File...\n");
    printf("Data File Updated \n");
    printf("Tank You For Using My Bookstore Management System .GodBye.\n");


}
void pBs (int bs[], double prs[])
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
            printf("bin# = %d\t",bs[i]);
            printf("price = %.2lf\n",prs[i]);
        }
    }



}





