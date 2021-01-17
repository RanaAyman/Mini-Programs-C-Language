#include <stdio.h>
#include <stdlib.h>

int main()
{
int n = 5 ;
 int f1 = 1 ;
 int f2 = 2 ;
 int f3 = 0 ;
 int counter = 0 ;
 while(counter < n){
 printf("%d\n",f1);
 f3 = f1+f2 ;
 f1 = f2 ;
 f2 = f3 ;
 counter = counter + 1 ;
}
   printf ("Program completed successfully!");
int a ;
printf("++a=%d",++a);
    return 0;
}
