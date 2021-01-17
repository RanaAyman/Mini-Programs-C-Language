#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
signed int sum_of_digit(signed long long int n)
{
    if (n == 0)
       return 0;
    return (n % 10 + sum_of_digit(n / 10));
}

// Driven Program to check above
int main()
{
    signed long long int num ;
     scanf("%lli",&num);
    signed int result = sum_of_digit(num);
    printf("Sum of digits of %lli = %d\n", num, result);
    return 0;
}
