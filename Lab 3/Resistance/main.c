#include <stdio.h>
#include <stdlib.h>

int main()
{
  double R1,R2,R3,RS,RP;
printf("Enter value of three resistances\n");
scanf("%lf%lf%lf",&R1,&R2,&R3);
RS=R1+R2+R3 ;
RP=1/(1/R1 + 1/R2 + 1/R3);
printf("Equivalent resistance in series = %.5lf and in parallel = %.5lf",RS,RP);
    return 0;
}
