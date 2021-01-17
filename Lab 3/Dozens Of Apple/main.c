#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
int D=12 ;
int dozen;
int extra;
printf("Enter the integer numder of apples:\n");
scanf("%d:\n",&x);
dozen=x/D;
extra= x%D;
printf("%d dozens and %d apples",dozen,extra);
getch();
    return 0;
}
