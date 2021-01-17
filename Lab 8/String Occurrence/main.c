#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 256
int main() {
    char str[MAX_SIZE], test[MAX_SIZE];
    int i,j,found,count=0;
    gets(str);
    gets(test);
    int len1,len2;
     len1=strlen(str);
     len2 = strlen(test);
     for(i=0; i <= len1-len2; i++)
    {
        /* Match word with string */
        found = 1;
        for(j=0; j<len2; j++)
        {
            if(str[i + j] != test[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            printf("Occurrence at index %d\n",i+j-len2);
            count++;
        }
    }
   printf("Total number of occurrences = %d",count);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
