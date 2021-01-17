#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i;
int fact=1;
printf("Enter a positive integer number\n");
scanf("%d",&n);
if(n<=12 && n>=0){
for(i=1;i<=n;i+=1){
    fact=fact*i;
}
printf("%d",fact);
}else{
printf("the number is out of the range");
}
    return 0;
}
