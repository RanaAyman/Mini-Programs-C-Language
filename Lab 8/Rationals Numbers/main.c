#include<stdio.h>
#include<stdlib.h>

struct Fraction{
 int numerator;
 int denominator;
}num1,num2;
int GCDF(int a,int b){
int i;
int GCD;
    for(i=1;i<=a&&i<=b&&a!=0&&b!=0;i++){ //a!=0 and b!=0 is not important ??
        if(a%i==0 && b%i==0){
            GCD=i;}}
         if(a==0)
           {
             GCD=b;
            }
          if(b==0)
          {
              GCD=a;
          }
          return GCD;
}
void Add(double nu1,double de1,double nu2,double de2){
    double z=(nu1/de1)+(nu2/de2);
 printf("%.0lf/%.0lf + %.0lf/%.0lf = %lf",nu1,de1,nu2,de2,z);
}
void Subtract(double nu1,double de1,double nu2,double de2){
    double z=(nu1/de1)-(nu2/de2);
 printf("%.0lf/%.0lf - %.0lf/%.0lf = %lf",nu1,de1,nu2,de2,z);
}
void Multiply(double nu1,double de1,double nu2,double de2){
    double z=(nu1/de1)*(nu2/de2);
 printf("%.0lf/%.0lf * %.0lf/%.0lf = %lf",nu1,de1,nu2,de2,z);
}
void Divide(double nu1,double de1,double nu2,double de2){
     if(de1==0 || de2==0 || nu2==0){
        printf("Error:Division by zero is not allowed in fractions");
     }
     else{
    double z=(nu1/de1)/(nu2/de2);
 printf("%.0lf/%.0lf / %.0lf/%.0lf = %lf",nu1,de1,nu2,de2,z);
}
}
int main(){
    char operator;
    printf("Choose the operator of the operation (+,-,*,/)");
    scanf("%c",&operator);
printf("Enter the first fraction\n");
scanf("%d/%d",&num1.numerator,&num1.denominator);
printf("Enter the second fraction\n");
scanf("%d/%d",&num2.numerator,&num2.denominator);

int GCD1,GCD2;
GCD1=GCDF( num1.numerator, num1.denominator);
GCD2=GCDF( num2.numerator, num2.denominator );

switch(operator)
 {
 case'+':
    Add(num1.numerator/GCD1,num1.denominator/GCD1,num2.numerator/GCD2,num2.denominator/GCD2);
    break;

 case'-':
    Subtract(num1.numerator/GCD1,num1.denominator/GCD1,num2.numerator/GCD2,num2.denominator/GCD2);
    break;

 case'*':
    Multiply(num1.numerator/GCD1,num1.denominator/GCD1,num2.numerator/GCD2,num2.denominator/GCD2);
     break;

 case'/':
    Divide(num1.numerator/GCD1,num1.denominator/GCD1,num2.numerator/GCD2,num2.denominator/GCD2);
     break ;

 default:
    printf("Error : unsupported operator!");
 }
 return 0;
}
