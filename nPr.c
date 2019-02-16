#include "stdio.h"
int main()
{
int n,b,c,d,e=1,f=1,g,h,l=1,Answer,r;
printf("Enter value of n\n");
scanf("%d",&n);
printf("Enter value of r\n");
scanf("%d",&r);
for(d=1;d<=n;d++){
e=e*d;
  }
for(c=1;c<=r;c++){
    f=f*c;
}
 g=n-r;
 for(h=1;h<=g;h++){
    l=l*h;
 }
 Answer=e/(f*l);

printf("C(n,r):: %d\n",Answer);
  return(0);
}
