#include <stdio.h>
#include <stdlib.h>
int even(int number);
int main()
{
    int a,b;
    printf("Enter integer to check it is even or not\n");
    scanf("%d",&a);
    b=even(a);
    if(b==0)
    {
        printf("%d is Even number",a);
    }
      else
    {
        printf("%d is Odd number",a);
    }
    return 0;
}
int even(int a)
{
    int p;
    p=a%2;
    if(p==0)
    {
        p=0;
      return(p);
    }
    else
     {
        p=1;
      return(p);
    }

}
