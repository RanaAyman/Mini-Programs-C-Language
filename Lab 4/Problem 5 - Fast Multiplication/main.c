#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x,y,z1;
 //int z2;
 printf("Enter two numbers\n");
 scanf("%d%d",&x,&y);
 //z1= x*(pow(2,y)) ;
 z1=x<<y;
 printf("z1=%d\n",z1);
 //printf("Number %d is Shifted By %d Bit and be %d\n",x,y,z );
//z2=x<<y;
//printf("z2=%d\n",z2);
//printf("x*(pow(2,y)) = x<<y");
    return 0;
}
