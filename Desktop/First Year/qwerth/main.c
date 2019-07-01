#include <stdio.h>
#include <stdlib.h>
int sss(int x,int y,int z);
int main()
{
 int x=5,y=8,z=4;
 int *a=&x,*b=&y,*c=&z;
sss(int x,int y, int z);
 printf("%d%d",*a,*c);
    return 0;
}
int sss(int x,int y, int z){
x=y+z;
z=y*x;
}
