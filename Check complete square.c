#include <stdio.h>
#include <math.h>
int main()
{
double a,b,c,d;
for(d=1;d>0;d++){
printf("Enter value for check square\n");
scanf("%lf\n",&a );
if(a==-1){
  break;
}
b=sqrt(a);
c=fmod(a,b);
if(c==0){
  printf("Its a complete square");
}
else
{
  printf("Its not a complete square");
}
}
  return(0);
}
