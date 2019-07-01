//abedalmajeed    #1180197
//section:4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char CourseNames[8];
    int NumOfStudentsInCourse;
    double 	CourseAverageGrade ;

} course;

course courses[20];

int main()
{
    double avg[] = {0,0,0,0};
    double numberOfStudent[]= {0,0,0,0};

    FILE * in;
    char ch;
    in = fopen("course_info.txt", "r");

    int count =0;
    while ((count < 20 )&& (fscanf(in,"%s \t %d \t %lf",&courses[count].CourseNames,&courses[count].NumOfStudentsInCourse,&courses[count].CourseAverageGrade) )!=EOF)
    {
        count++;
    }
    fclose(in);
    for(int i=0; i<count; i++)
    {
        printf("%s \t\t %d \t\t\t %.2lf \t\t\t \n",courses[i].CourseNames,courses[i].NumOfStudentsInCourse,courses[i].CourseAverageGrade);
    }
    printf("\n");
    int i;
    for(i=0; i <= count; i++)
    {
        int c= 0;
        char cc=courses[i].CourseNames[4] ;
        c = cc - '0';
        avg[c-1]+=courses[i].CourseAverageGrade*courses[i].NumOfStudentsInCourse;
        numberOfStudent[c-1]+=courses[i].NumOfStudentsInCourse;
    }

    for ( int i =0; i<4; i++)
    {
        avg[i]= avg[i]/numberOfStudent[i];
    }

    if (numberOfStudent[0]==0)
    {
        printf("First year courses avg = No courses\n");

    }
    else
        printf("First year courses avg = %.2lf\n",avg[0]);


    if (numberOfStudent[1]==0)
    {
        printf("Second year courses avg = No courses\n");

    }
    else
        printf("Second year courses avg = %.2lf\n",avg[1]);

    if (numberOfStudent[2]==0)
    {
        printf("Third year courses avg = No courses\n");

    }
    else
        printf("Third  year courses avg = %.2lf\n",avg[2]);


    if (numberOfStudent[3]==0)
    {
        printf("Fourth year courses avg = No courses\n");

    }
    else
        printf("Fourth year courses avg = %.2lf\n\n",avg[3]);


    double highestAverage =avg[0];


    if (avg[1]>highestAverage)
        highestAverage=avg[1];

    if (avg[2]>highestAverage)
        highestAverage=avg[2];

    if (avg[3]>highestAverage)
        highestAverage=avg[3];

    printf("The highest average =%.2lf\n",highestAverage);

    return 0;

}
