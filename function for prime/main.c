#include <stdio.h>
#include <stdlib.h>
int primecheck(int value);
int main()
{
int value,hm;
printf("Enter value for to print false otherwise true\n");
scanf("%d",&value);
hm=primecheck(value);
if(hm==0)
{
    printf("False");
}
else
{
    printf("True");
}

    return 0;
}
int primecheck(int value)
{
int b,c,count=0,p;

if(value<=1){
p=0;
return(p);
}
else if(value==2){
p=0;
return(p);
}
else if(value>2){
for(b=1;b<=value;b++){
c=value%b;
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
