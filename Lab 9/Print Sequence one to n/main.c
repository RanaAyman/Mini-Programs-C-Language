#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void printNos(unsigned int n)
{
    if(n > 0)
    {
        printNos(n - 1);
        printf("%d ", n);
    }
    return;
}

// Driver code
int main()
{
    int n;
    scanf("%d",&n);
    printNos(n);
    return 0;
}
/*
seq(int n){
static int z=1;
   if(z<=n){
    printf("%d ",z++);
    seq(n);
   }
}
int main(void) {
    int n;
    scanf("%d",&n);
    seq(n);
//    Enter your code here. Read input from STDIN. Print output to STDOUT
    return 0;
}
*/
/*
int main(){
  //1
  static int no = 1;
  static int max = -1;

  //2
  if(max == -1){
    scanf("%d",&max);
  }

  //3
  if(no <= max){
    printf("%d ",no++);
    main();
  }
}
*/
