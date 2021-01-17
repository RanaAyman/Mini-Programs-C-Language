#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[256];
    int i=0;
    int numberOfWords=0;
    fgets(str,256,stdin);
    while(str[i]!='\0'){
        if((str[i]!=' ' && str[i]!='\t' && str[i]!='\n' && str[i]!='\0')&&(str[i+1]==' '|| str[i+1]=='\t'|| str[i+1]=='\n'|| str[i+1]=='\0'))
        {
            numberOfWords++;
        }
        i++;
    }
    printf("%d words",numberOfWords);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

