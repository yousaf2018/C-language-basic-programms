#include "stdio.h"
int main()
{
int a,b,c,d,n;
d=1;
printf("Enter value for triangle");
scanf("%d",&n);
for(a=1;a<=n;a++){
for(b=1;b<=a;b++){
printf(" %d ",d);
d++;

}
printf("\n");
}

return(0);
}
