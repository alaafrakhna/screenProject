#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//abedalhameed    #1180196
//abedalmajeed    #1180197
#define S 100
#define NAMESIZE 50

void displayMainMenu();
void addBook( char[][NAMESIZE],int[],double[],int *);
void removeBook(char[][NAMESIZE], int[],double[],int *);
void searchForBook(char[][NAMESIZE],int[],double[],int);
void uploadDataFile(char[][NAMESIZE],int[],double[],int *);
void updateDataFile(char[][NAMESIZE],int[],double[],int);
void printBooks(char[][NAMESIZE],int[],double[],int);

int main()
{
   // int bins[s]= {1234,2345};
   // double prices[s]= {72.45,25.20};
    int s=0;

    int bins[S];
    double prices[S];
    char names[S][NAMESIZE];
    printf("Welcome to my bookstore Management System\n");

    uploadDataFile(names,bins,prices,&s);

    displayMainMenu();

    int x;
    scanf("%d",&x);

    while(x!=5)
    {
        switch(x)
        {
        case 1:
            addBook(names,bins,prices,&s);
            displayMainMenu();
            scanf("%d",&x);

            break;
        case 2:
            removeBook(names,bins,prices,&s);
            displayMainMenu();
            scanf("%d",&x);
            break;
        case 3:
            searchForBook(names,bins,prices,s);
            displayMainMenu();
            scanf("%d",&x);
            break;

        case 4:
            printBooks (names,bins,prices,s);
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

    updateDataFile(names,bins,prices,s);

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
void addBook(char names[][NAMESIZE],int bins[], double prices[],int * s)
{
    int i,x=0 , temp1=0,j ;
    int n;
    double temp2;


    if ((*s)==S)
    {
        printf("List is Full, No change\n");
    }
    else
    {
        printf("Enter bin number for book \n");
        scanf("%d",&n);


        for(i=0; i<(*s); i++)
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

        bins[(*s)]=n;

         printf("Enter Name for book \n");
         scanf("%s",&names[(*s)]);
         printf("Enter price of book\n");
         scanf("%lf",&prices[(*s)]);
            //prices[(*s)]=p;

             (*s)++;

            printf("Book With bin %d has been added\n",n);
        }


    }

   char temp3[50];

for (i=0;i<(*s)-1;++i){
    for(j=0;j<(*s)-1;j++){
        if (bins[j]>bins[j+1]){

            temp1=bins[j];
            bins[j]=bins[j+1];
            bins[j+1]=temp1 ;

            temp2=prices[j];
            prices[j]=prices[j+1];
            prices[j+1]=temp2;

            strcpy(temp3,names[j]);
            strcpy(names[j],names[j+1]);
            strcpy(names[j+1],temp3);
        }
    }
}



}


void removeBook(char names[][NAMESIZE],int bins[], double prices[],int *s)
{


int i,x=-1;

    int n;

    if ((*s)==0)
    {
        printf("List is empty \n");
    }
    else
    {
        printf("Enter bin number for book to remove\n");
        scanf("%d",&n);

        for(i=0; i<(*s); i++)
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
            for(i=x; i<(*s)-1; i++)
            {
                bins[i]=bins[i+1];
                prices[i]=prices[i+1];
                strcpy(names[i],names[i+1]);
            }
            (*s)--;
            printf("book with bin %d is removed\n",n);
        }
    }




}
void searchForBook(char names[][NAMESIZE],int bins[], double prices[], int s)
{
    int i,x=-1;

    int n;

    if (s==0)
    {
        printf("List is empty \n");
    }
    else
    {
        printf("Enter bin to searched for \n");
        scanf("%d",&n);

        for(i=0; i<s; i++)

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
            printf("Name = %s\t\t",names[x]);
            printf("bin# = %d\t",bins[x]);
            printf("price = %.2lf \n",prices[x]);
        }

    }


void uploadDataFile(char names[][NAMESIZE],int bins[], double prices[],int *s )
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
    while (fscanf(in,"%s \t %d \t %lf",&names[(*s)] ,&bins[(*s)],&prices[(*s)])!=EOF){

        //bins[(*s)]=bin;
        //prices[(*s)]=p;
        (*s)++;
    }
    fclose(in);

    printf("Uploaded File ...\n");
    printf("Data File Uploaded \n\n");
int temp1=0,i,j,temp2;
char temp3[50];

for (i=0;i<(*s)-1;++i){
    for(j=0;j<(*s)-1;j++){
        if (bins[j]>bins[j+1]){

            temp1=bins[j];
            bins[j]=bins[j+1];
            bins[j+1]=temp1 ;

            temp2=prices[j];
            prices[j]=prices[j+1];
            prices[j+1]=temp2;

            strcpy(temp3,names[j]);
            strcpy(names[j],names[j+1]);
            strcpy(names[j+1],temp3);
        }
    }
}


}


void updateDataFile(char names[][NAMESIZE],int bins[], double prices[],int s)
{
     FILE * fp;
   int i;
   /* open the file for writing*/
   fp = fopen ("books.txt","w");

   /* write 10 lines of text into the file stream*/
   for(i = 0; i <s;i++){
       fprintf (fp, " %s   %d    %lf\n",names[i],bins[i],prices[i]);
   }

   /* close the file*/
   fclose (fp);

    printf("Updating Data File...\n");
    printf("Data File Updated \n");
    printf("Tank You For Using My Bookstore Management System .GodBye.\n");


}
void printBooks (char names[][NAMESIZE],int bins[], double prices[],int s)
{
    int i ;

    if (s==0)
    {
        printf("List is Empty...\n");
    }
    else
    {

        for(i=0; i<s; i++)
        {
            printf("Name = %s\t\t\t\t",names[i]);
            printf("bin# = %d \t",bins[i]);
            printf("price = %.2lf\n\n",prices[i]);

        }
    }


}
