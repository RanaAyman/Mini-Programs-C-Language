#include <stdio.h>
#include <stdlib.h>

int main()
{  // why identify operator first ??
    // if else ??

 char operator ;               //operator = oper ??
 int num1 , num2 ;
 printf("Enter any operator of (+, -, /, *, %)\n ");
 scanf(" %c",&operator);
 printf("Enter first number and second number \n ");
 scanf("%d%d",&num1,&num2);

 switch(operator)
 {
 case'+':
    printf("%d + %d = %d",num1,num2,num1+num2);
    break;
 case'-':
    printf("%d - %d = %d",num1,num2,num1-num2);
    break;
 case'*':
     printf("%d * %d = %d",num1,num2,num1*num2);
     break;
 case'/':
     if(num2==0){
        printf("Error:Division by zero is not allowed");
     }
     else{
     printf("%d / %d = %d",num1,num2,num1/num2);
     }
     break ;
          ////////////////////////
case '%':
 if(num2==0){
     printf("Error:Division by zero is not allowed");
     }
     else{
     printf("%d %% %d = %d",num1,num2,num1%num2);
    }
     break;
             ////////////////////////
 default:
    printf("Error : unsupported operator!");
 }
 getch();
    return 0;
}
