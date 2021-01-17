#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int valueOfPolynomial(int a);
int main() {
int x;
long long int finalResult;
    scanf("%d",&x);
    finalResult= valueOfPolynomial(x);
       printf("%lli",finalResult);
    return 0;
}
long long int valueOfPolynomial(int a)
{
    long long int result;
        result = (3*pow(a,5))+(2*pow(a,4))-(5*pow(a,3))-(pow(a,2))+(7*a)-6 ;
    return result;
}
