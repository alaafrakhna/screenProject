/*
abedalhameed    #1180196
section:4
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char CourseNames[8];
    int NumOfStudentsInCourse;
    double 	CourseAverageGrade ;

} course;

course input[20];

int main()
{

    double averag1=0,averag2=0,averag3=0,averag4=0;
    double totalestudent1=0,totalestudent2=0,totalestudent3=0,totalestudent4=0;

    FILE * in;
    char ch;
    in = fopen("course_info.txt ", "r");

    int count =0;
    while ((count < 20 )&& (fscanf(in,"%s \t %d \t %lf",&input[count].CourseNames,&input[count].NumOfStudentsInCourse,&input[count].CourseAverageGrade) )!=EOF)
    {
        count++;
    }
    fclose(in);

    for(int i=0; i<count; i++)
    {
        printf("%s \t\t %d \t\t\t %.2lf \t\t\t ",input[i].CourseNames,input[i].NumOfStudentsInCourse,input[i].CourseAverageGrade);
        printf("\n");
    }
    printf("\n");
    for(int i=0; i <= count; i++)
    {
        char c =input[i].CourseNames[4] ;
        switch(c)
        {
        case '1':
            averag1+=input[i].CourseAverageGrade*input[i].NumOfStudentsInCourse;
            totalestudent1+=input[i].NumOfStudentsInCourse;
            break;
        case '2':
            averag2+=input[i].CourseAverageGrade*input[i].NumOfStudentsInCourse;
            totalestudent2+=input[i].NumOfStudentsInCourse;
            break;
        case '3':
            averag3+=input[i].CourseAverageGrade*input[i].NumOfStudentsInCourse;
            totalestudent3+=input[i].NumOfStudentsInCourse;
            break;
        case '4':
            averag4+=input[i].CourseAverageGrade*input[i].NumOfStudentsInCourse;
            totalestudent4+=input[i].NumOfStudentsInCourse;
            break;
        }
    }

    averag1=averag1/totalestudent1;
    averag2=averag2/totalestudent2;
    averag3=averag3/totalestudent3;
    averag4=averag4/totalestudent4;

    if (totalestudent1==0)
    {
        printf("First year courses avg = No courses\n");
    }
    else
        printf("First year courses avg = %.2lf\n",averag1);

    if (totalestudent2==0)
    {
        printf("Second year courses avg = No courses\n");
    }
    else
        printf("Second year courses avg = %.2lf\n",averag2);

    if (totalestudent3==0)
    {
        printf("Third year courses avg = No courses\n");
    }
    else
        printf("Third  year courses avg = %.2lf\n",averag3);


    if (totalestudent4==0)
    {
        printf("Fourth year courses avg = No courses\n");
    }
    else
        printf("Fourth year courses avg = %.2lf\n\n",averag4);


    double highestAverage =averag1;

    if (averag2>highestAverage)
        highestAverage=averag2;

    if (averag3>highestAverage)
        highestAverage=averag3;

    if (averag4>highestAverage)
        highestAverage=averag4;

    printf("The highest average =%.2lf\n",highestAverage);
    return 0;
}





