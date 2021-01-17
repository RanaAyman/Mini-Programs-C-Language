#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
int x,i,k=0;
scanf("%d",&x);
int a[x];
for(i=0;i<x;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<x;i++)
{
    k=k^a[i];
}
printf("%d",k);

    return 0;
}


