#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your first name\n");
    char string[10];
    char string2[10];
    scanf("%s",string);
    printf("Enter your second name\n");
    scanf("%s",string2);
    printf("Hello dear Mr. %s %s",string,string2);
    return 0;
}
