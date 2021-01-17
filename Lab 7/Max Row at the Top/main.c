#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r, c;
    int i,k;
    int sum ,index=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    int test[r];
    for(i=0;i<r;i++){
        for(k=0;k<c;k++){
            scanf("%d",&a[i][k]);
        }
    }

    for(i=0;i<r;i++){
        sum=0;
        for(k=0;k<c;k++){
           sum=sum+a[i][k];
        }
        test[i]=sum;
    }
    int max=test[0];
    for(i=1;i<r;i++){
        if(test[i]>max){
            max=test[i];
            index=i;
        }
    }
    int temp;
    for(i=0;i<c;i++){
       temp=a[index][i];
        a[index][i]=a[0][i];
        a[0][i]=temp;
    }
    for(i=0;i<r;i++){
        for(k=0;k<c;k++){
            printf("%d ",a[i][k]);
             if(k==c-1){
                printf("\n");
            }
        }
    }

    return 0;
}
