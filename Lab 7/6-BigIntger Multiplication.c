#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int n) {
	int i = 0;
	while(i < n - 1 && a[i] == 0)i++;
	while(i < n) {
		printf("%d",a[i]);
		i++;
	}
	printf("\n");
}
void scan_array(int a[], int n) {
	for(int i = 0; i < n; i++) {
		scanf("%1d", &a[i]);
	}
}
void multiply(int a[], int n, int b[], int m, int r[], int t) {
    for(int i=0;i<t;i++){
        r[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            r[i+j+1]+=a[i]*b[j];
        }
    }
    int temp;
    for(int i=t-1;i>=0;i--){
        temp=r[i]/10;
        r[i]=r[i]%10;
        r[i-1]+=temp;
    }
}


int main()
{
    while(1){
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

        printf("\n*----------------------------------------------------------------------------------------------------------*\n");
    }
    return 0;
}
