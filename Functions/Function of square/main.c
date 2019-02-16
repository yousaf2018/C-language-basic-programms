#include <stdio.h>
#include <stdlib.h>
int square(int number);

int main()
{
    int a,b;
    printf("Enter number for square\n");
    scanf("%d",&a);
    b=square(a);
    printf("Result:- %d",b);
         return 0;
}
 int square(int a)
{
    int p;
    p=a*a;
    return(p);
}
