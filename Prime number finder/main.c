#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,count=0;
printf("Enter value for to check it is prime or not\n");
scanf("%d",&a);
if(a<=1){
printf("Its not a prime number");
}
else if(a==2){
printf("Its not a prime number");
}
else if(a>2){
for(b=1;b<=a;b++){
c=a%b;
if(c==0){
count=count+1;
}
}
 if(count>=3){
printf("Its not a prime number");
}
else
{

    printf("Its a prime number");

}


}

    return 0;
}
