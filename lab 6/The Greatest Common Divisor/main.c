#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,i,GCD;
    scanf("%d%d",&a,&b);

    for(i=1;i<=a&&i<=b&&a!=0&&b!=0;i++){ //a!=0 and b!=0 is not important ??
        if(a%i==0&&b%i==0){
            GCD=i;}}
         if(a==0)
           {
             GCD=b;
            }
          if(b==0)
          {
              GCD=a;
          }
    printf("%d",GCD);
    return 0;
}
