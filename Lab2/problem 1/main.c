#include <stdio.h>
#include <stdlib.h>

int main()
{
float grade_1 , grade_2 , grade_3 , grade_4 , grade_5 ,sum  ;  //why when 'int' result wrong??
float average ;
    printf("Enter grades of five students:\n");
    scanf("%f%f%f%f%f",&grade_1,&grade_2,&grade_3,&grade_4,&grade_5);
    sum = grade_1 + grade_2 + grade_3 + grade_4 + grade_5 ;
    average = sum /5 ;
    printf("average = %.2f ",average);
    return 0;
}
