#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int a,c,balls,count=1,d,balls2;
for(d=1;d>0;d++){
    int sum=0;
printf("Guess the sum of two dice rolls\n");
scanf("%d",&c);
srand(time(0));
for(a=1;a<=1;a++){
balls=rand()%6;
}
for(a=1;a<=1;a++){
balls2=rand()%6;
}
sum=balls+balls2;
if(sum==c){
break;
}
count=count+1;
}


printf("Hurrah you won at last after using attempts:: %d",count);


    return 0;
}
