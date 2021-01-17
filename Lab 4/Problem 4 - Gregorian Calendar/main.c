#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
printf("Enter number of month\n");
scanf("%d",&x);
switch(x)
{
case 1:
    printf("The corresponding month name of number %d is January",x);
    break;
case 2:
    printf("The corresponding month name of number %d is February",x);
    break;
case 3:
    printf("The corresponding month name of number %d is March",x);
    break;
case 4:
    printf("The corresponding month name of number %d is April",x);
    break;
case 5:
    printf("The corresponding month name of number %d is May",x);
    break;
case 6:
    printf("The corresponding month name of number %d is June",x);
    break;
case 7:
    printf("The corresponding month name of number %d is July",x);
    break;
case 8:
    printf("The corresponding month name of number %d is August",x);
    break;
case 9:
    printf("The corresponding month name of number %d is September",x);
    break;
case 10:
    printf("The corresponding month name of number %d is October ",x);
    break;
case 11:
    printf("The corresponding month name of number %d is November ",x);
    break;
case 12:
    printf("The corresponding month name of number %d is December",x);
    break;
default:
    printf("Error: The input number does not represent a valid month");
}
getch();

    return 0;
}
