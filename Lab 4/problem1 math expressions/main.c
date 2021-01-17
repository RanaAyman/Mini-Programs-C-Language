#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 double x,y,z,a,b,c,d,e,f,g;
 double A,B,C,D;
 printf("Enter the value of x,y,z\n");
 scanf("%lf%lf%lf",&x,&y,&z);
 printf("Enter the value of a,b,c,d,e,f,g\n");
 scanf("%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f,&g);
 A = (3*x+2*(pow(10,5)))/(4*x+5.2*(pow(10,4)));
 B = 5*(pow((x+y+3)/(27+z),2)) ;
 C = (a+b/c)/(d+e/(f+g));
 D = pow(sin(x+y),2);
 printf("A=%lf\n",A);
 printf("B=%lf\n",B);
 printf("C=%lf\n",C);
 printf("D=%lf\n",D);    // notice that the result of radian not degree ... (x+y)*PI/180
 getch();
    return 0;
}
