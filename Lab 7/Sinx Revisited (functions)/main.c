#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
double radian(double x)
{
    double result;
    result=x*M_PI/180;
    return result ;
}
double factorial(int n){
    int i;
    double fact=1 ;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
double Power(double n,int m)
{
    double power=1,j;
    for(j=0;j<m;j++){
    power=power*n;
    }
        return power;
}

int main() {
   double x;
    int n,k;
    scanf("%lf%d",&x,&n);
    x=radian(x);
	double ans = x;
    for(k=1;k<n;k++)
    ans+=Power(-1,k)*Power(x,2*k+1)/factorial(2*k+1);

  	// call the function here


   	printf("calculated %.10lf expected %.10lf\n", ans, sin(x));


   	return 0;
}
