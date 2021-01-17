#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,res;
    scanf("%d",&n);
    res=fib(n);
    printf("Fibonacci of %d = %d",n,res);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
fib(int n){
    if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
