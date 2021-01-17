#include <stdio.h>
#include <stdlib.h>

int main()
{
  int m,n,r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],trans[c][r];
    for(m=0;m<r;m++){
        for(n=0;n<c;n++)
            {
            scanf("%d",&a[m][n]);
        }
    }
      for(m=0;m<r;m++){
        for(n=0;n<c;n++)
            {
            printf("%d ",a[m][n]);
            if (n == c-1)
                printf("\n");
        }
    }

     for(m=0;m<r;m++){
        for(n=0;n<c;n++)
        {
         trans[n][m]=a[m][n];
        }
    }
     for(m=0;m<c;m++){
        for(n=0;n<r;n++)
            {
            printf("%d ",trans[m][n]);
            if (n == r-1)
                printf("\n");
        }
    }
    return 0;
}
