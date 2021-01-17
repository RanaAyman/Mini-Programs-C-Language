#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int n,k,i,temp,shift_counter=0;
  scanf("%d%d",&n,&k);
  int array[n];
  for( i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
  //for(i=0;i<n;i++){
  //  printf("%d ",array[i]);
  // }
 // printf("\n");

while(shift_counter<k && n!=0){
  temp=array[n-1];
for(i=n-1;i>=1;i--)
{
   array[i]=array[i-1];
}
    array[0]=temp;
shift_counter++;
}
for(i=0;i<n;i++){
printf("%d ",array[i]);
}
    return 0;
}
