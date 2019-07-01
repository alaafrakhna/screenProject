#include <stdio.h>
#include <stdlib.h>
#define s 5
void a(int[],int[],int[]);

int main()
{
    int A[s] ={1,2,3,4,6};
    int B[s] ={1,3,4,4,5};
    int C[s]={0,0,0,0,0} ;


     a(A,B,C);







    return 0;
}



   void a(int A[s],int B[s],int C[s]){
   int i;
   for (i=0;i<s;i++){
   C[i]=A[i]+B[i];
   printf("%d\n",C[i]);}


   }



