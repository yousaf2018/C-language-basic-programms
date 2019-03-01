#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter number\n");
scanf("%d",&a);
printf("Enter number you want to take power of it\n");
scanf("%d",&b);
for(c=1;c<=b;c++){
  a=a*a;
}
printf("%d",&a);

}
