#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,score,balls,sum=0;
srand(time(0));
for(i=1;i>0;i++){
    balls=rand()%6;
        printf("\n %d",balls);
     if(balls==5){
    break;
     }
    sum=balls+sum;
 }
printf("\nScore:: %d",sum);
    return 0;
}
