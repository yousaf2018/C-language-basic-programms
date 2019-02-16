#include <stdio.h>
int main()
{
int a,b;
printf("Enter number");
scanf("%d",&a);
printf("Enter number you want to take power of it");
scanf("%d",&b);
for(c=1;c<=b;c++){
  a=a*c;
}
printf("%d",&a);

}
