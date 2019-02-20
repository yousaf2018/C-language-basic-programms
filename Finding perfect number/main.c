#include <stdio.h>
int  perfectnumber(int);
void  main()
{
    printf("perfect number\n");
    int a;
    scanf("%d",&a);
    perfectnumber(a);
}
int perfectnumber(a)
{

int loop,counter=0;
for(loop=1;loop>0;loop++){
    if(counter>=a)
    {
        break;
    }
int b,c,count;
count=0;

for(b=1;b<loop;b++){
c=loop%b;
if(c==0){
count=count+b;
}
}
 if(count==loop){
printf("Your perfectnumber %d\n",loop);
counter++;
}

}}
