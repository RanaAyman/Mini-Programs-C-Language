#include <stdio.h>
#include <stdlib.h>

void printTriangle (int n)
{
 if(n>1)
 {   int i;
     for (i=0;i<n-1;i++)
     printf("*");
     printf("\n");
     printTriangle(n-1);
 }
}

void printInvertedTriangle(int n)
{
    if (n==1)
 {printf("*");
  printf("\n");
 }

 else if(n>1)
 {

     printInvertedTriangle(n-1);
     int i;
     for (i=0;i<n;i++)
     printf("*");
     printf("\n");
 }
}



int main(void)
{int n;
scanf("%d",&n);
    printInvertedTriangle(n);
    printTriangle (n);
}
