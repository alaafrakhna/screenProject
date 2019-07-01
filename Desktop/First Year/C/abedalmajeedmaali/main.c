#include <stdio.h>
#include <stdlib.h>

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

  switch(x){
        case 1:addBook();
        displayMainMenu();
        scanf("%d",&x);
        break;
        case 2:removeBook();
        displayMainMenu();
        scanf("%d",&x);
        break;
        case 3:searchForBook();
        displayMainMenu
        scanf("%d",&x);
        break;
        case 4:updateDataFile();

        break;
        default:printf("No Such Operation ! Please Try Again");
        displayMainMenu();
        scanf("%d",&x);
        break;

        }



    return 0;
}


void displayMainMenu(){

    printf("Please Selected an Operation "1-4"\n");
    printf("1-Add a Book");
    printf("2-Remove a Book");
    printf("3-Search For a Book");
    printf("4-Exit System");


}
void addBook(){
printf("Book Info Has Been Remove");

}
void removeBook(){
printf("Book Info Has Been Remove");

}
void searchForBook(){
printf("Book Has Been Searched For");
}
void uploadDataFile(){

     printf("Uploaded File ...\n");
    printf("Data File Uploaded ");
}
void updateDataFile(){

    printf("Updating Data File...");
    printf("Data File Updated ");

}
