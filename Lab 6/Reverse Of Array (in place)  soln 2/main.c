#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp,last=n-1;
    for(i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[last];
        a[last]=temp;
        last--;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
