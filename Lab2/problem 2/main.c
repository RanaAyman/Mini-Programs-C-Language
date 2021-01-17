#include <stdio.h>
#include <stdlib.h>

int main()
{
   int r , d;
  // const float PI =3.14159 ;
   #define PI 3.14159
   printf("Enter the integer radius of circle:\n");
   scanf("%d",&r);
   d = r*2 ;
   float circumference = 2* PI * r ;
   float area = PI * r * r ;
   printf("Diameter =%d\n",d);
   printf("Circumference =%f\n",circumference);
   printf("Area =%f\n",area);
    return 0;
}
