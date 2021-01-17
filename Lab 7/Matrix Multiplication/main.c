#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scanMatrix(int arr1[200][200],int row,int col);
void multiplyMatrices(int arr1[200][200],int arr2[200][200],int result[200][200],int n,int f,int m);
void printMatrix(int result[200][200],int row,int col);
int main() {
 int n,f,m;
    int i,j;
    scanf("%d%d%d",&n,&f,&m);
    int a[200][200],b[200][200];
    int k,result[200][200];
    scanMatrix(a,n,f);
    //printf("first array scanned");
    scanMatrix(b,f,m);
    multiplyMatrices(a,b,result,n,f,m);
    printMatrix(result,n,m);
    return 0;
}
 void scanMatrix(int arr1[200][200],int row,int col){
     int i,j;
        for(i=0;i<row;i++){
        for(j=0; j<col;j++)
        {
            scanf("%d", &arr1[i][j]);
            //printf("%d", arr1[i][j]);
        }
    }
 }
void multiplyMatrices(int arr1[200][200],int arr2[200][200],int result[200][200],int n,int f,int m){
   int i,k,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
         result[i][j]=0;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
        {
            for(k=0;k<f;k++){
                 result[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
}
     void printMatrix(int result[200][200],int row,int col){
         int n,m,j,i;
        for(i=0;i<row;i++){
          for(j=0;j<col;j++){
            printf("%d ",result[i][j]);
              if(j==col-1)
                  printf("\n");
          }
        }
       }
