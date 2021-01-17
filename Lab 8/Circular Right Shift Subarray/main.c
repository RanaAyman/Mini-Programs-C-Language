#include <stdio.h>
#include <stdlib.h>

//reverse elements of subarray from a[left] to a[right]
void reverse(int a[], int left, int right) {
int temp,i;
    int size=right-left+1;
    for(i=0;i<size/2;i++){
        temp=a[i+left];
        a[i+left]=a[right-i];
        a[right-i]=temp;
    }
}

// shift the subarray a[left...right] to the right
//use reverse() as stated above
void shift(int a[], int left, int right, int k) {
 int i;
 int j;
 j=left+1;
    for(i=0;i<(k%(right-left+1));i++){
        reverse(a,left,right);
        reverse(a,j,right);
    }
}

// reads a single query and process it by updateing a[]
void process_query(int a[]) {
   int i,b[3];
     for(i=0;i<3;i++){
        scanf("%d",&b[i]);
     }
    int left=b[0];
    int right=b[1];
    int k=b[2];
    shift(a,left,right,k);

}

// scans array of size n
void scan_array(int a[], int n) {
   int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}

// print array of size n
void print_array(int a[], int n) {
   int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

// don't change any thing in the main
int main() {

   int n, q;
   scanf("%d", &n);
   int a[n];
   scan_array(a, n);

   scanf("%d", &q);
   for(int i = 0; i < q; i++) {
      process_query(a);
   }

   print_array(a, n);

   return 0;
}
