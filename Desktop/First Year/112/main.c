#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x= 7,b=2;
    for(x=5;x>=1;x-=2)
    b= b*x--;

    printf("%d",b);

    printf("Hello world!\n");
    return 0;
}
