#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i;
   printf("Enter an integer\n");
   scanf("%d",&n);
   if(n>1){
    for(i=2;i<n;i++){
       if(n%i==0){
        printf("Not prime");
        break;
       }
       }
        if(i==n ){
       printf("Prime");
       }
   }else if(n==1){
       printf("Not prime");
   }else{
   printf("Error!,wrong number");
   }
    return 0;
}
