#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,m,i,j,k=0;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  scanf("%d",&m);
  int b[m];
  for(i=0;i<m;i++){
    scanf("%d",&b[i]);
  }
int c[n+m];
i=0,j=0;
  while(i<n&&j<m){
    if(a[i]<b[j]){
        c[k]=a[i];
        i++;
        k++;
    }
    else{
        c[k]=b[j];
        j++;
        k++;
    }
  }
    while(i<n)
    c[k++]=a[i++];
  while(j<m)
    c[k++]=b[j++];
 for(i=0;i<k;i++)
    printf("%d ",c[i]);
    return 0;
}
