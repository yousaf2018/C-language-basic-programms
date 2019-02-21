#include <stdio.h>
#include <stdlib.h>
int powerrule(int,int);
int main()
{
  printf("This function will be found result of your input like 1+x^1+x^2+.......x^n\n");
  printf("Enter value of x\n");
  int x,y,result=0;
  scanf("%d",&x);
  printf("Enter value of n\n");
  scanf("%d",&y);
  result=powerrule(x,y);
  printf("Your final result:-%d",result);
    return 0;
}
int powerrule(x,y)
{
    int a,b,c,final=0,h;
     h=x;
        for(b=1;b<y;b++)
        {
            x=x*h;
            final=final+x;
        }

    final=final+h+1;
    return(final);

}
