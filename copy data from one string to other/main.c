#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Enter the string\n");
    char string[100];
    scanf("%s",string);
    char string2[100];
    int a=0;
    while(string[a]!='\0')
    {
        string2[a]=string[a];
        a++;
    }
    string2[a]='\0';
    printf("Your copied data in other string:- %s",string2);
    return 0;
}
