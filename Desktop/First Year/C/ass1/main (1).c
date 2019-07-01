// name : ishaq rajab id : 1180085 section:4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define S 7
#define MAX 20
#define M 4
typedef struct
{
    char courseName[S];
    int studentNumber;
    double avg;

}course_c;


int main()
{
    course_c courses[MAX];int val,i=0;int j = 0,d[M] = {0 , 0, 0, 0};
     double sum[M] = {0.0, 0.0, 0.0, 0.0}, avg[M] = {0.0, 0.0, 0.0, 0.0}, max=0.0;
    FILE*in;
    in=fopen("course_info.txt","r");
    val=fscanf(in,"%s %d %lf",courses[i].courseName,&courses[i].studentNumber,&courses[i].avg );
    while(val!=EOF)
    {
        i++;
        val=fscanf(in,"%s %d %lf",courses[i].courseName,&courses[i].studentNumber,&courses[i].avg );
    }
    fclose(in);
    for(j=0;j<i;j++)
    {
        if(strncmp(courses[j].courseName,"comp1",4)==0)
        {
            sum[0]+=(courses[j].studentNumber * courses[j].avg);
            d[0]+=courses[j].studentNumber;

        }
        else if(strncmp(courses[j].courseName,"comp2",4)==0)
        {
             sum[1]=sum[1]+(courses[j].studentNumber * courses[j].avg);
            d[1]=d[1]+courses[j].studentNumber;

        }
        else if (strncmp(courses[j].courseName,"comp3",4)==0)
        {
             sum[2]=sum[2]+(courses[j].studentNumber * courses[j].avg);
            d[2]=d[2]+courses[j].studentNumber;
        }
        else
        {
            sum[3]=sum[3]+(courses[j].studentNumber * courses[j].avg);
            d[3]=d[3]+courses[j].studentNumber;
        }
    }
    avg[0]=sum[0]/d[0];
    max=avg[0];
    for(j=1; j<i; j++)
    {
        if(d[j] != 0)
        {
            avg[j] = sum[j] / d[j];
            if(avg[j] > max)
                max = avg[j];
        }
    }



        printf("First year course avg=%f\n",avg[0]);
        printf("second year course avg =%f\n,",avg[1]);
        if(avg[2]==0)
            printf("third year course avg =%s\n","no course");
        printf("fourth year courses avg =%f\n",avg[3]);

    return 0;
}
