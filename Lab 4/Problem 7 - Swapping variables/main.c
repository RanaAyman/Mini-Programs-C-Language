#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b ;
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After Swapping: a = %d , b = %d",a,b);
    return 0;
}
