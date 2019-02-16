#include <stdio.h>
#include <stdlib.h>
int checkprime(int);
int main()
{
    int a,hm;
printf("Enter value for to check it is prime or not\n");
scanf("%d",&a);
hm=checkprime(a);
if(hm==0)
{
    printf("False");
}
else
{
    printf("true");
}

    return 0;
}
int checkprime(int a)
{
int b,c,count=0,p;


if(a<=1){
p=0;
return(p);
}
else if(a==2){
p=0;
return(p);
}
else if(a>2){
for(b=1;b<=a;b++){
c=a%b;
if(c==0){
count=count+1;
}
}
 if(count>=3){
p=0;
return(p);
}
else
{


    p=1;
    return(p);
}


}
}
