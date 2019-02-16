#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Plz Enter number between 10 and 99\n");
    scanf("%d",&a);
    b=a/10;
    c=a % 10;
    d=b+c;
    printf("After adding both digits of given number= %d",d);
        return 0;
}
