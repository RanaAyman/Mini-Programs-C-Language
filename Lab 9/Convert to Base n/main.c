#include <stdio.h>
#include <stdlib.h>
int base(int n,int b ){
  if(n==0)
    return 0;
  else{
    return (n%b+10*base(n/b , b));
  }
}
int main()
{
    int n,b;
 scanf("%d",&n);
 scanf("%d",&b);
 printf("%d",base(n,b));
    return 0;
}
/*
  int z=n%b;
    printf("%d",z);
    n=n/b;
    if(n!=0)
    base(n,b);
    */
