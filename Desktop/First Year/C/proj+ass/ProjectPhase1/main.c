#include <stdio.h>
#include <stdlib.h>
/*
abedalhameed    #1180196
abedalmajeed    #1180197
*/
void displayMainMenu();
void addBook();
void removeBook();
void searchForBook();
void uploadDataFile();
void updateDataFile();

int main()
{
    printf("Welcome to my bookstore\n");

    uploadDataFile();
    displayMainMenu();

    int x ;
    scanf("%d",&x);

    while(x!=4){
        switch(x)
        {
        case 1:
            addBook();
            displayMainMenu();
            scanf("%d",&x);

            break;
        case 2:
            removeBook();
            displayMainMenu();
            scanf("%d",&x);
            break;
        case 3:
            searchForBook();
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


updateDataFile();
    return 0;
}


void displayMainMenu()
{

    printf("Please Selected an Operation (1-4)\n");
    printf("1-Add a Book\n");
    printf("2-Remove a Book\n");
    printf("3-Search For a Book\n");
    printf("4-Exit System\n\n");


}
void addBook()
{
    printf("Book Info Has Been Added\n\n");

}
void removeBook()
{
    printf("Book Info Has Been Remove\n\n");

}
void searchForBook()
{
    printf("Book Has Been Searched For\n\n");
}
void uploadDataFile()
{

    printf("Uploaded File ...\n");
    printf("Data File Uploaded \n\n");
}


void updateDataFile()
{

    printf("Updating Data File...\n");
    printf("Data File Updated \n");
    printf("Tank You For Using My Bookstore Management System .GodBye.\n");


}
