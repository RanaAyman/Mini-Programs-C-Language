#include <stdio.h>
#include <stdlib.h>
long long sum(long long *a,long long i,long long n){
    if(i == n)
        return 0;

    return a[i] + sum(a, i+1, n);
}

long long numOfOnes(long long S){
    if(S == 0)
        return 0;

    return S%2 + numOfOnes(S/2);
}

int main(){

    long long T,arr[100005];
    scanf("%lld", &T);
    while(T--){
        long long n;
        scanf("%lld", &n);
        for(int i=0; i<n; i++){
            scanf("%lld", &arr[i]);
        }

        long long S = sum(arr,0,n);

        long long answer = numOfOnes(S);
        printf("%lld\n", answer);
    }
  return 0;
}
