#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
// print array of size n
void print_array(int a[], int n) {
	int i = 0;
	while(i < n - 1 && a[i] == 0)i++;
	while(i < n) {
		printf("%d",a[i]);
		i++;
	}
	printf("\n");
}

// scans a single integer into array with size n
void scan_array(int a[], int n) {
	for(int i = 0; i < n; i++) {
		scanf("%1d", &a[i]);
	}
}

// the multiplication operation
// it is better to split the logic on several other functions
// then make multiply function call them.
void multiply(int a[], int n, int b[], int m, int r[], int t) {
    int i,j,temp,carry=0;
    for(i=0;i<n/2;i++){
   temp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
}
    for(i=0;i<m/2;i++){
        temp=b[i];
        b[i]=b[m-i-1];
        b[m-i-1]=temp;
    }
     for(i=0;i<t;i++){
        r[i]=0;
    }
        for(i=0;i<n;i++){
         for(j=0;j<m;j++){
                r[i+j]=r[i+j]+a[i]*b[j];
        }
    }
         for(i=0;i<t;i++){
          carry=r[i]/10;
          r[i]=r[i]%10;
          r[i+1]=r[i+1]+carry;
    }
     for(i=0;i<t/2;i++){
        temp=r[i];
       r[i]=r[t-i-1];
        r[t-i-1]=temp;
    }

}
// don't change any thing in the main
int main() {

	int n;
	scanf("%d", &n);
	int x[n];
	scan_array(x, n);

	int m;
	scanf("%d", &m);
	int y[m];
	scan_array(y, m);

	int t = n + m;
	int ans[t];

	multiply(x, n, y, m, ans, t);
	print_array(ans, t);

	return 0;
}
