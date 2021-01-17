#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979323846
int main()
{
   double x;
	int n,i,f,j=0;
    long int factorial=1;
	scanf("%lf %d", &x, &n);
	x= (x * M_PI) / 180;
    double ans=0;
    for (i=1;j!=n;i=i+2){
        f=i;
        factorial=1;
        while(f>1){
            factorial=factorial*f;
            f=f-1;
        }
            j=j+1;
            if(j%2!=0){
                ans=ans+pow(x,i)/factorial;
            }
               else{
                   ans=ans-pow(x,i)/factorial;
               }
        }
    printf("calculated %.10lf expected %.10lf\n",ans,sin(x));
       return 0;
}
