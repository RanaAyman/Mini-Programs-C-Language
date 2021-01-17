#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//////////// N E W TRY ////////////////// NEED TO COMPLETE
#include <stdio.h>
#include <stdlib.h>
int read_array(int n1 , int a1[]){
int i,k;
printf("Enter elements of array \n");
for(i=0;i<n1;i++){
    scanf("%d",&a1[i]);
    for(k=0;k<i;k++){
    if(i>0 && a1[i]==a1[k]){
        i=i-1;
        n1=n1-1;
        break;
    }
}
}
return n1;
}
/*
int intersection(int z,int inter[],int n1,int n2,int a1[],int a2[]){
int i1=0,i2=0,count=0;
while(i1<n1 && i2<n2){
        for(i1=0;i1<n1;i1++){
        for(i2=0;i2<n2;i2++){
        if(a2[i2]==a1[i1]){
        inter[count]=a2[i2];
        count++;
        break;
    }
}
}
}
while(i1<n1){
    inter[count]=a1[i1];
    count++;
    i1++;
}
while(i2<n2){
    inter[count]=a2[i2];
    count++;
    i2++;
}
z=count;
return z;
}
*/
void print_array(int n1,int a1[]){
int i;
for(i=0;i<n1;i++){
    printf("%d ",a1[i]);
}
}
int main(){
int n1;
printf("Enter size of first array \n");
scanf("%d",&n1);
int a1[n1];
n1=read_array(n1,a1);
printf("Array 1 = ");
print_array(n1,a1);
int n2;
printf("\nEnter size of second array \n");
scanf("%d",&n2);
int a2[n2];
n2=read_array(n2,a2);
printf("Array 2 = ");
print_array(n2,a2);
//////////////////////////////////////////
/*     intersection
int z=n1+n2;
int inter[z];
z=intersection(z,inter,n1,n2,a1,a2);
print_array(z,inter);
printf("\nintersection= ");
print_array(z,inter);
*/
//////////////////////////////////////////
return 0;
}

//// END OF NEW TRY ///////////////////////////




*************************************************

///////////////////////////////////////////////////
int main() {

    int n1,n2;
   int i,j,taken=0;
    int flag ;
    int a1[j];
    scanf("%d",&n1);
    int Array1[n1];
    for (i= 0; i<n1; i++){
    scanf("%d", &Array1[i]);}

   // scanf("%d",&n2);
  //  int Array2[n2];
  //for (i= 0; i<n2; i++){
 // scanf("%d", &Array2[i]);
  //}
 //////////////////////////////
    for(i=0;i<n1;i++)
    {
         flag=0;
        for(j=0;j<=taken;j++){

          if(Array1[i]== a1[j]){
                flag=1;

          }}
          if (flag==0){
          a1[taken]=Array1[i];
          taken=taken+1;
          printf("%d",a1[taken]);
    }
        }


    printf("Array1: ");
    for(i=0;i<taken;i++){
        printf("%d",Array1[i]);
    }



   // Array1[j]=Array1[n1-1];
 //    printf("Array1: ");
   // for(i=0;i<=j;i++)
   // {
     //   printf("%d, ",Array1[i]);
   // }
    /////////////////////////
    // for(i=0;i<n2-1;i++)
    //{
      //  if(Array2[i]!=Array2[i+1]){
        //    Array2[k]=Array2[i];
          //  k++;
        //}
    //}
    //Array2[k]=Array2[n2-1];
    //printf("\nArray2: ");
    //for(i=0;i<=k;i++)
    //{
      //  printf("%d, ",Array2[i]);
    //}

    return 0;
}



// int intUnion[],Intersection[];

//int swapped,temp;

    //for sorting
//while(1){
  // swapped=0;
   //for(i=0;i<n1-1;i++){
    //if(Array1[i]>Array1[i+1]){
    //temp=Array1[i];
    //Array1[i]=Array1[i+1];
    //Array1[i+1]=temp;
    //swapped=1;
   //}
//}
   //   if(swapped==0){
  //      break;
   //   }
//}
