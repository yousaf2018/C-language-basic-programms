#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your string\n");
    char string[100];
    scanf("%s",string);
    int a=0,counter=0;
    while(*(string+a)!='\0')
    {
        counter++;
         a++;
    }
    printf("Length of string:- %d",counter);
    return 0;
}
