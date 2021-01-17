#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int x, y;
	scanf("%d %d", &x, &y);
	char z;

if(x>=0 && x<=15 && y>=0 && y<=15)
{
    z=(x<<4)|(y);
	printf("%d\n", z);

}else{
        printf("x or y out of the range");}

    return 0;
}
