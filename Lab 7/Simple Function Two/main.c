#include <stdio.h>
#include <stdlib.h>

int digit(int,int);

int main() {
    int n,k,result;
    scanf("%d%d",&n,&k);
    result=digit(n,k);
    printf("%d",result);
    return 0;
}
int digit(int num , int pos)
{
    int i=1;
    while(i<pos && num>=0){
        num/=10;
        i++;
    }
    return num%10;
}
